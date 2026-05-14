#pragma once
#include "CoreMinimal.h"
#include "EUpscalingMethod.generated.h"

UENUM(BlueprintType)
enum class EUpscalingMethod : uint8 {
    U_Off,
    U_TSR,
    U_DLSS,
    U_FSR3,
};

