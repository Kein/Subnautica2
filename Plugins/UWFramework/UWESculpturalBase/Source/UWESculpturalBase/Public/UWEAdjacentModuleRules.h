#pragma once
#include "CoreMinimal.h"
#include "EUWECellOccupancyRequirements.h"
#include "UWEModuleMatch.h"
#include "UWEAdjacentModuleRules.generated.h"

USTRUCT(BlueprintType)
struct FUWEAdjacentModuleRules {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EUWECellOccupancyRequirements OccupancyRequirements;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FUWEModuleMatch> AllowedMatches;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FUWEModuleMatch> ProhibitedMatches;
    
    UWESCULPTURALBASE_API FUWEAdjacentModuleRules();
};

