#pragma once
#include "CoreMinimal.h"
#include "UWEPowerSimulationState.generated.h"

USTRUCT(BlueprintType)
struct UWEPOWER_API FUWEPowerSimulationState {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    float StoredPower;
    
    UPROPERTY(SaveGame)
    float TotalPowerGeneration;
    
    UPROPERTY(SaveGame)
    float TotalContinuousPowerDrain;
    
    UPROPERTY(SaveGame)
    float PowerGridLimit;
    
    UPROPERTY(SaveGame)
    float UsableStoredPower;
    
    UPROPERTY(SaveGame)
    float DisabledStoredPower;
    
    UPROPERTY(SaveGame)
    float MaxChargeableAmount;
    
    UPROPERTY(SaveGame)
    float BasePowerGridLimit;
    
    UPROPERTY(SaveGame)
    float TotalPowerCapacity;
    
    UPROPERTY(SaveGame)
    float TotalDisabledStoredPower;
    
    UPROPERTY(SaveGame)
    bool bIsPowered;
    
    FUWEPowerSimulationState();
};

