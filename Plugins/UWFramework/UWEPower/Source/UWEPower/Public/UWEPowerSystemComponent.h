#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWEPowerNodeComponent.h"
#include "UWEPowerSimulationState.h"
#include "UWEPowerSystemComponent.generated.h"

class UUWEPowerSystemComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEPOWER_API UUWEPowerSystemComponent : public UUWEPowerNodeComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPoweredStateChanged, UUWEPowerSystemComponent*, PowerSystem, bool, NewIsPowered);
    
    UPROPERTY(BlueprintAssignable)
    FPoweredStateChanged OnIsPoweredChanged;
    
protected:
    UPROPERTY(BlueprintReadOnly, Replicated)
    float PowerGeneration;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    float PowerDrain;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    float StoredPower;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    float HiddenPower;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    float DisabledReservePower;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    float PowerCapacity;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    float HiddenPowerCapacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    float CorePowerRequirement;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_IsPowered)
    bool IsPowered;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ShowPowerHUD;
    
public:
    UUWEPowerSystemComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void UpdatePowerSystemState(const FUWEPowerSimulationState& SystemState);
    
public:
    UFUNCTION()
    void OnStoredPowerChanged();
    
protected:
    UFUNCTION()
    void OnRep_IsPowered();
    
public:
    UFUNCTION(BlueprintCallable)
    void InitPowerSystemSimulation(const FGuid& StructureSimulationId);
    
    UFUNCTION(BlueprintPure)
    bool GetPowerSystemAuthority() const;
    
};

