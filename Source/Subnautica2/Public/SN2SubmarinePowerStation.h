#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UWEInventoryItem.h"
#include "SN2EMTTorsionComponentExtraInfoInterface.h"
#include "SN2SubmarineStation.h"
#include "SN2SubmarinePowerStation.generated.h"

class USN2EMTTorsionPointComponent;
class UStaticMeshComponent;
class UUWEInventoryComponent;
class UUWEInventoryInteractionComponent;

UCLASS()
class SUBNAUTICA2_API ASN2SubmarinePowerStation : public ASN2SubmarineStation, public ISN2EMTTorsionComponentExtraInfoInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPowerChanged, float, PowerPercentage);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBreakerStateChanged, bool, Enabled);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAlignmentChanged, float, Alignment);
    
    UPROPERTY(BlueprintAssignable)
    FAlignmentChanged OnAlignmentChanged;
    
    UPROPERTY(BlueprintAssignable)
    FPowerChanged OnPowerChanged;
    
    UPROPERTY(BlueprintAssignable)
    FBreakerStateChanged OnBreakerStateChanged;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UStaticMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEInventoryComponent* Inventory;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEInventoryInteractionComponent* InventoryInteraction;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    USN2EMTTorsionPointComponent* LeftEMT;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    USN2EMTTorsionPointComponent* RightEMT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NumStartingPowerCells;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WreckStartingPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FloodLevelToFlipBreaker;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, ReplicatedUsing=OnRep_LeftAlignment)
    float LeftAlignment;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, ReplicatedUsing=OnRep_RightAlignment)
    float RightAlignment;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, ReplicatedUsing=OnRep_BreakerEnabled)
    bool bBreakerEnabled;
    
public:
    ASN2SubmarinePowerStation(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetBreakerState(bool Enabled);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnRightAlignmentChanged(float NewAlignment);
    
private:
    UFUNCTION()
    void OnRep_RightAlignment();
    
    UFUNCTION()
    void OnRep_LeftAlignment();
    
    UFUNCTION()
    void OnRep_BreakerEnabled();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnLeftAlignmentChanged(float NewAlignment);
    
private:
    UFUNCTION()
    void OnInventoryItem(const FUWEInventoryItem& InventoryItem);
    
    UFUNCTION()
    void OnInventoryChanged();
    
    UFUNCTION()
    void OnForcePowerOff(FGameplayTag GameplayTag, int32 TagCount);
    
    UFUNCTION()
    void OnDamageTaken(float Damage);
    
    UFUNCTION()
    void OnApplyTorsionRight(float Torsion, float DeltaTime);
    
    UFUNCTION()
    void OnApplyTorsionLeft(float Torsion, float DeltaTime);
    
protected:
    UFUNCTION(BlueprintPure)
    bool IsBreakerFlooded() const;
    
public:
    UFUNCTION(BlueprintPure)
    float GetEnergyPercentage() const;
    
    UFUNCTION(BlueprintPure)
    float GetAlignment() const;
    
    UFUNCTION(BlueprintCallable)
    void EMTAdjustAlignmentByDelta(USN2EMTTorsionPointComponent* TorsionPoint, float Delta);
    

    // Fix for true pure virtual functions not being implemented
};

