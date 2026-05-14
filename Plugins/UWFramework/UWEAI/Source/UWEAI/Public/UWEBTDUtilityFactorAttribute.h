#pragma once
#include "CoreMinimal.h"
#include "EUWEAIUtilityFactorEvaluationFilter.h"
#include "UWEAIUtilityFactorAttributeType.h"
#include "UWEBTDUtilityFactorBase.h"
#include "UWEBTDUtilityFactorAttribute.generated.h"

UCLASS(BlueprintType)
class UWEAI_API UUWEBTDUtilityFactorAttribute : public UUWEBTDUtilityFactorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UWEAIUtilityFactorAttributeType UtilityAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EUWEAIUtilityFactorEvaluationFilter UtilityFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float UtilityFilterValue;
    
    UUWEBTDUtilityFactorAttribute();

};

