#pragma once
#include "CoreMinimal.h"
#include "UWEWorldPopRuleFilter.h"
#include "UWEWorldPopRuleFilterReduceClustered.generated.h"

UCLASS(EditInlineNew)
class UWEWORLDPOPULATION2_API UUWEWorldPopRuleFilterReduceClustered : public UUWEWorldPopRuleFilter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    double PercentageToKeep;
    
    UPROPERTY(EditAnywhere)
    double MinClusterWeight;
    
    UPROPERTY(EditAnywhere)
    double ClusterScale;
    
    UUWEWorldPopRuleFilterReduceClustered();

};

