#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWEWaveCellPriority.generated.h"

USTRUCT()
struct FUWEWaveCellPriority {
    GENERATED_BODY()
public:
    UPROPERTY()
    FIntVector Coords;
    
    UPROPERTY()
    float Priority;
    
    UPROPERTY()
    bool HasBeenInitialized;
    
    UWESCULPTURALBASE_API FUWEWaveCellPriority();
};

