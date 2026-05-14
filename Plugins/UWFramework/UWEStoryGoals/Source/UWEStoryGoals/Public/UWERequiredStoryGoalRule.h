#pragma once
#include "CoreMinimal.h"
#include "UWEStoryGoalRule.h"
#include "UWERequiredStoryGoalRule.generated.h"

class UUWEStoryGoal;

UCLASS(CollapseCategories, EditInlineNew)
class UWESTORYGOALS_API UUWERequiredStoryGoalRule : public UUWEStoryGoalRule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UUWEStoryGoal* RequiredStoryGoalRef;
    
    UUWERequiredStoryGoalRule();

};

