#pragma once
#include "CoreMinimal.h"
#include "UWEStoryGoalRule.h"
#include "UWEStoryGoalRuleOr.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UWESTORYGOALS_API UUWEStoryGoalRuleOr : public UUWEStoryGoalRule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    TArray<UUWEStoryGoalRule*> Rules;
    
    UUWEStoryGoalRuleOr();

};

