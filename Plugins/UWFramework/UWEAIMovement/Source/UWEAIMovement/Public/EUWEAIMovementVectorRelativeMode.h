#pragma once
#include "CoreMinimal.h"
#include "EUWEAIMovementVectorRelativeMode.generated.h"

UENUM(BlueprintType)
enum class EUWEAIMovementVectorRelativeMode : uint8 {
    None,
    MaxInCurrentMovementStyle,
    MaxInAllMovementStyles,
};

