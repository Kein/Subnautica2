#pragma once
#include "CoreMinimal.h"
#include "UWEStoryGoalRule.h"
#include "UWEStoryGoalRuleAnd.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UWESTORYGOALS_API UUWEStoryGoalRuleAnd : public UUWEStoryGoalRule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    TArray<UUWEStoryGoalRule*> Rules;
    
    UUWEStoryGoalRuleAnd();

};

