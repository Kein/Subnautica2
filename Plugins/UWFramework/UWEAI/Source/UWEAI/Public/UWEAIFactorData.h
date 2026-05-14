#pragma once
#include "CoreMinimal.h"
#include "EUWEAIUtilityFactorCalculationType.h"
#include "UWEAIFactorData.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FUWEAIFactorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EUWEAIUtilityFactorCalculationType CalculationFunction;
    
    UPROPERTY(EditDefaultsOnly)
    float Constant;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UCurveFloat* PiecewiseCurve;
    
    UPROPERTY(EditDefaultsOnly)
    float Weight;
    
    UWEAI_API FUWEAIFactorData();
};

