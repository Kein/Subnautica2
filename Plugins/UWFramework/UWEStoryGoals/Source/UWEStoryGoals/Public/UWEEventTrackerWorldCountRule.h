#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UWEStoryGoalRule.h"
#include "UWEEventTrackerWorldCountRule.generated.h"

class UUWEPrimaryDataAssetBase;

UCLASS(CollapseCategories, EditInlineNew)
class UWESTORYGOALS_API UUWEEventTrackerWorldCountRule : public UUWEStoryGoalRule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag EventVerb;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag EventTag;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UUWEPrimaryDataAssetBase* EventAsset;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MinimumCount;
    
    UUWEEventTrackerWorldCountRule();

};

