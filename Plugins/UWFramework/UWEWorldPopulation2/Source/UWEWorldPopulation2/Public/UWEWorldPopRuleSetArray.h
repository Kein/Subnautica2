#pragma once
#include "CoreMinimal.h"
#include "UWEWorldPopRuleSetArray.generated.h"

class UUWEWorldPopRuleSet;

USTRUCT(BlueprintType)
struct FUWEWorldPopRuleSetArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UUWEWorldPopRuleSet*> RuleSetArray;
    
    UWEWORLDPOPULATION2_API FUWEWorldPopRuleSetArray();
};

