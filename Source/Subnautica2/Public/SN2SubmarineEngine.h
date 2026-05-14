#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Interactable.h"
#include "EngineMode.h"
#include "SN2SubmarineStation.h"
#include "SN2SubmarineEngine.generated.h"

class UStaticMeshComponent;

UCLASS()
class SUBNAUTICA2_API ASN2SubmarineEngine : public ASN2SubmarineStation, public IInteractable {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEngineStatusChanged, const FGameplayTag&, EngineStatus);
    
    UPROPERTY(ReplicatedUsing=OnRep_EngineMode)
    FGameplayTag EngineMode;
    
    UPROPERTY(BlueprintAssignable)
    FEngineStatusChanged EngineStatusChanged;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FEngineMode> EngineModes;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UStaticMeshComponent* Mesh;
    
public:
    ASN2SubmarineEngine(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetEngineStatus(const FGameplayTag& InEngineStatus);
    
    UFUNCTION()
    void OnRep_EngineMode();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEngineStatusChanged(const FGameplayTag& NewEngineStatus);
    
protected:
    UFUNCTION()
    void OnDamageChangedServer();
    
public:
    UFUNCTION(BlueprintPure)
    FGameplayTag GetEngineStatus() const;
    
    UFUNCTION(BlueprintPure)
    float GetEngineEfficiency() const;
    
    UFUNCTION(BlueprintCallable)
    FGameplayTag GetCurrentEngineMode();
    
    UFUNCTION(BlueprintCallable)
    void CycleEngineMode();
    

    // Fix for true pure virtual functions not being implemented
};

