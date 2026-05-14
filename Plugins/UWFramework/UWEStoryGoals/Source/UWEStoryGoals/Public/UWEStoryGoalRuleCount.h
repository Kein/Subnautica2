#pragma once
#include "CoreMinimal.h"
#include "UWEStoryGoalRule.h"
#include "UWEStoryGoalRuleCount.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UWESTORYGOALS_API UUWEStoryGoalRuleCount : public UUWEStoryGoalRule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    TArray<UUWEStoryGoalRule*> Rules;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MinimumCount;
    
    UUWEStoryGoalRuleCount();

};

