#pragma once
#include "CoreMinimal.h"
#include "EUWEAIUtilityFactorEvaluationFilter.generated.h"

UENUM(BlueprintType)
enum class EUWEAIUtilityFactorEvaluationFilter : uint8 {
    None,
    Less,
    LessEqual,
    Greater,
    GreaterEqual,
    Equal,
    NotEqual,
};

