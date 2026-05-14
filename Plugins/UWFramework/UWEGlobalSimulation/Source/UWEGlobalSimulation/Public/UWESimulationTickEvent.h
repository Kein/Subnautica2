#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWESimulationTickEvent.generated.h"

USTRUCT(BlueprintType)
struct FUWESimulationTickEvent {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid SimulationId;
    
    UPROPERTY()
    double LastTickTime;
    
    UPROPERTY()
    double TickInterval;
    
    UWEGLOBALSIMULATION_API FUWESimulationTickEvent();
};

