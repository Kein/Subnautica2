#pragma once
#include "CoreMinimal.h"
#include "EUWEAIUtilityFactorCalculationType.generated.h"

UENUM(BlueprintType)
enum class EUWEAIUtilityFactorCalculationType : uint8 {
    Constant,
    Linear,
    PiecewiseLinear,
};

