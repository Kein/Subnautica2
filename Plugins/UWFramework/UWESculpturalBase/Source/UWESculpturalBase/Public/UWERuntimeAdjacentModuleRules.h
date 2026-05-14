#pragma once
#include "CoreMinimal.h"
#include "EUWECellOccupancyRequirements.h"
#include "UWERuntimeModuleMatch.h"
#include "UWERuntimeAdjacentModuleRules.generated.h"

USTRUCT(BlueprintType)
struct FUWERuntimeAdjacentModuleRules {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    EUWECellOccupancyRequirements OccupancyRequirements;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FUWERuntimeModuleMatch> AllowedMatches;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FUWERuntimeModuleMatch> ProhibitedMatches;
    
    UWESCULPTURALBASE_API FUWERuntimeAdjacentModuleRules();
};

