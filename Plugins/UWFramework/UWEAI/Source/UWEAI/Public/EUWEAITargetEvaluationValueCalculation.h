#pragma once
#include "CoreMinimal.h"
#include "EUWEAITargetEvaluationValueCalculation.generated.h"

UENUM(BlueprintType)
enum class EUWEAITargetEvaluationValueCalculation : uint8 {
    ContributeValueDirectly,
    MultiplyValueByTargetDistanceProportion,
    ApplyDistanceFilter,
};

