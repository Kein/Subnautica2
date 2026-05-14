#pragma once
#include "CoreMinimal.h"
#include "EUWEGrowthFunction.generated.h"

UENUM(BlueprintType)
enum class EUWEGrowthFunction : uint8 {
    EaseInOut,
    EaseIn,
    EaseOut,
    Linear,
};

