#pragma once
#include "CoreMinimal.h"
#include "UWEWorldPopRuleFilter.h"
#include "UWEWorldPopRuleFilterDepth.generated.h"

UCLASS(EditInlineNew)
class UWEWORLDPOPULATION2_API UUWEWorldPopRuleFilterDepth : public UUWEWorldPopRuleFilter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float MinDepth;
    
    UPROPERTY(EditAnywhere)
    float MaxDepth;
    
    UUWEWorldPopRuleFilterDepth();

};

