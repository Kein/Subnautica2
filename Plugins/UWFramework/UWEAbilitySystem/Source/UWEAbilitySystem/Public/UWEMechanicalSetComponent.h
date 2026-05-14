#pragma once
#include "CoreMinimal.h"
#include "UWEAttributeSetComponent.h"
#include "UWEMechanicalSetComponent.generated.h"

class AActor;
class UVolumeTrackerComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEABILITYSYSTEM_API UUWEMechanicalSetComponent : public UUWEAttributeSetComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCrushDepthExceededChanged, bool, bCrushDepthExceeded);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEnergyChangedDelegate, AActor*, Who);
    
    UPROPERTY(BlueprintAssignable)
    FEnergyChangedDelegate OnEnergyEmpty;
    
    UPROPERTY(BlueprintAssignable)
    FEnergyChangedDelegate OnEnergyRefilled;
    
    UPROPERTY(BlueprintAssignable)
    FEnergyChangedDelegate OnEnergyChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnCrushDepthExceededChanged OnCrushDepthExceededChanged;
    
protected:
    UPROPERTY(Instanced)
    UVolumeTrackerComponent* VolumeTracker;
    
public:
    UUWEMechanicalSetComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetScanSpeedScalar(float Val);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxEnergy(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetEnergyModifier(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetEnergy(float NewValue);
    
    UFUNCTION(BlueprintPure)
    float GetScanSpeedScalar() const;
    
    UFUNCTION(BlueprintPure)
    float GetRepairSpeedScalar() const;
    
    UFUNCTION(BlueprintPure)
    float GetNormalizedEnergy() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxEnergy() const;
    
    UFUNCTION(BlueprintPure)
    float GetEnergy() const;
    
    UFUNCTION(BlueprintPure)
    float GetCrushDepth() const;
    
    UFUNCTION(BlueprintCallable)
    void ConsumeEnergy(float EnergyToConsume);
    
    UFUNCTION(BlueprintCallable)
    void AddEnergy(float EnergyToAdd);
    
};

