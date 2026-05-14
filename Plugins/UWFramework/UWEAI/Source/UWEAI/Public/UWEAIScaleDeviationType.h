#pragma once
#include "CoreMinimal.h"
#include "UWEAIScaleDeviationType.generated.h"

UENUM(BlueprintType)
enum class UWEAIScaleDeviationType : uint8 {
    Random,
    IncreaseOnly,
    DecreaseOnly,
};

