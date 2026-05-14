#pragma once
#include "CoreMinimal.h"
#include "UWEStoryGoalRule.h"
#include "UWEStoryGoalRuleNegate.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UWESTORYGOALS_API UUWEStoryGoalRuleNegate : public UUWEStoryGoalRule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEStoryGoalRule* RuleToNegate;
    
    UUWEStoryGoalRuleNegate();

};

