#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UWEStoryGoalRule.generated.h"

class AActor;

UCLASS(Abstract, BlueprintType, CollapseCategories, DefaultToInstanced, EditInlineNew)
class UWESTORYGOALS_API UUWEStoryGoalRule : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UUWEStoryGoalRule();

    UFUNCTION(BlueprintPure)
    bool IsRuleSatisfied(AActor* Actor);
    
};

