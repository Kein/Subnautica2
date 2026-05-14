#pragma once
#include "CoreMinimal.h"
#include "UWEWorldPopRuleFilter.h"
#include "UWEWorldPopRuleFilterDistAboveSurface.generated.h"

UCLASS(EditInlineNew)
class UWEWORLDPOPULATION2_API UUWEWorldPopRuleFilterDistAboveSurface : public UUWEWorldPopRuleFilter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float DistanceAboveSurface;
    
    UPROPERTY(EditAnywhere)
    bool bFilterWithinDistance;
    
    UUWEWorldPopRuleFilterDistAboveSurface();

};

