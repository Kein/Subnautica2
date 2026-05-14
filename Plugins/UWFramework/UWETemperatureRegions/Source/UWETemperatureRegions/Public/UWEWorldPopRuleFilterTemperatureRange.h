#pragma once
#include "CoreMinimal.h"
#include "UWEWorldPopRuleFilter.h"
#include "UWEWorldPopRuleFilterTemperatureRange.generated.h"

UCLASS(EditInlineNew)
class UWETEMPERATUREREGIONS_API UUWEWorldPopRuleFilterTemperatureRange : public UUWEWorldPopRuleFilter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float MinTemperature;
    
    UPROPERTY(EditAnywhere)
    float MaxTemperature;
    
    UUWEWorldPopRuleFilterTemperatureRange();

};

