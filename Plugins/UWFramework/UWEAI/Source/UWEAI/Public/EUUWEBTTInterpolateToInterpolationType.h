#pragma once
#include "CoreMinimal.h"
#include "EUUWEBTTInterpolateToInterpolationType.generated.h"

UENUM(BlueprintType)
enum class EUUWEBTTInterpolateToInterpolationType : uint8 {
    Exponential,
    Linear,
};

