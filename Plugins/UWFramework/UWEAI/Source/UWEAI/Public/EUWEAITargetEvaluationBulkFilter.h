#pragma once
#include "CoreMinimal.h"
#include "EUWEAITargetEvaluationBulkFilter.generated.h"

UENUM(BlueprintType)
enum class EUWEAITargetEvaluationBulkFilter : uint8 {
    None,
    Less,
    LessEqual,
    Greater,
    GreaterEqual,
    Equal,
    NotEqual,
};

