#pragma once
#include "CoreMinimal.h"
#include "UWEWorldPopRuleFilter.h"
#include "UWEWorldPopRuleFilterReduce.generated.h"

UCLASS(EditInlineNew)
class UWEWORLDPOPULATION2_API UUWEWorldPopRuleFilterReduce : public UUWEWorldPopRuleFilter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    double PercentageToKeep;
    
    UUWEWorldPopRuleFilterReduce();

};

