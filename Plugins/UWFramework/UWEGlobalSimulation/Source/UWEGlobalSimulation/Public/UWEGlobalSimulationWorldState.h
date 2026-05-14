#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWEGlobalSimulationWorldState.generated.h"

USTRUCT()
struct FUWEGlobalSimulationWorldState {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FVector> PlayerLocations;
    
    UPROPERTY()
    double CurrentTime;
    
    UWEGLOBALSIMULATION_API FUWEGlobalSimulationWorldState();
};

