#pragma once
#include "CoreMinimal.h"
#include "UWEPowerNodeSimulation.h"
#include "UWEPowerSimulationState.h"
#include "UWEPowerSystemSimulation.generated.h"

UCLASS()
class UWEPOWER_API UUWEPowerSystemSimulation : public UUWEPowerNodeSimulation {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    FUWEPowerSimulationState PowerState;
    
    UPROPERTY(SaveGame)
    float CorePowerRequirement;
    
    UPROPERTY(SaveGame)
    bool bIsAuthoritySim;
    
    UUWEPowerSystemSimulation();

};

