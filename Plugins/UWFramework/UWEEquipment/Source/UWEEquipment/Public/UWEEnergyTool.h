#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "AmmoReleasedDelegateDelegate.h"
#include "EnergyChangedDelegateDelegate.h"
#include "EnergyChangedDelegatePctDelegate.h"
#include "UWEBaseTool.h"
#include "UWEToolBattery.h"
#include "UWEEnergyTool.generated.h"

class AActor;
class UMaterialInstanceDynamic;
class UUWEItemType;
class UWidgetComponent;

UCLASS()
class UWEEQUIPMENT_API AUWEEnergyTool : public AUWEBaseTool {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FEnergyChangedDelegate OnEnergyEmpty;
    
    UPROPERTY(BlueprintAssignable)
    FEnergyChangedDelegate OnEnergyRefilled;
    
    UPROPERTY(BlueprintAssignable)
    FEnergyChangedDelegatePct OnEnergyChanged;
    
    UPROPERTY(BlueprintAssignable)
    FAmmoReleasedDelegate OnAmmoReleased;
    
    UPROPERTY(BlueprintAssignable)
    FAmmoReleasedDelegate OnAmmoLoaded;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FUWEToolBattery> RequiredBatteries;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere, ReplicatedUsing=OnRep_BatteryType)
    UUWEItemType* BatteryType;
    
    UPROPERTY(BlueprintReadOnly, Replicated, SaveGame, VisibleAnywhere)
    FGuid BatteryItemId;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere, ReplicatedUsing=OnRep_EnergyLevel)
    float EnergyLevel;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere, ReplicatedUsing=OnRep_MaxEnergyLevel)
    float MaxEnergyLevel;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UWidgetComponent* HologramScreenBackground;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UWidgetComponent* HologramScreenForeground;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName DesiredHologramScreenParentSocket;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bCanShowReloadPrompt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag AmmoLoadCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag AmmoUnloadCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag AmmoRefillCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag AmmoEmptyCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag AmmoLowCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AmmoLowThreshold;
    
private:
    UPROPERTY()
    bool AllowAmmoLowCue;
    
    UPROPERTY()
    TArray<UMaterialInstanceDynamic*> DynamicMaterialInstances;
    
public:
    AUWEEnergyTool(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetEnergyLevel(float InEnergyLevel);
    
protected:
    UFUNCTION()
    void OnRep_MaxEnergyLevel();
    
    UFUNCTION()
    void OnRep_EnergyLevel();
    
private:
    UFUNCTION()
    void OnRep_BatteryType();
    
    UFUNCTION()
    void OnEnergyRefilledCallback(AActor* Who);
    
    UFUNCTION()
    void OnEnergyEmptyCallback(AActor* Who);
    
    UFUNCTION()
    void OnEnergyChangedCallback(AActor* Who);
    
public:
    UFUNCTION(BlueprintPure)
    bool HasEnergy() const;
    
};

