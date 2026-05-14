#pragma once
#include "CoreMinimal.h"
#include "UWEWorldPopRuleFilterPoints.h"
#include "UWEWorldPopRuleFilterPointsNook.generated.h"

UCLASS(EditInlineNew)
class UWEWORLDPOPULATION2_API UUWEWorldPopRuleFilterPointsNook : public UUWEWorldPopRuleFilterPoints {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 MaximumNormalsForNook;
    
    UPROPERTY(EditAnywhere)
    int32 NumNookRays;
    
    UPROPERTY(EditAnywhere)
    double NookRadius;
    
    UUWEWorldPopRuleFilterPointsNook();

};

