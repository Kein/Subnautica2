#pragma once
#include "CoreMinimal.h"
#include "EUWEAIMovementDebugChartType.generated.h"

UENUM(BlueprintType)
enum class EUWEAIMovementDebugChartType : uint8 {
    AccelerationVsVelocityMaxInCurrentMovementStyle,
    AccelerationVsVelocityMaxInAllMovementStyles,
    RelativeAccelerationMaxInCurrentVsMaxInAllMovementStyles,
    RawAccelerationVsSmoothedAcceleration,
    RawAngularVelocityVsSmoothedAngularVelocity,
    RelativeAngularVelocity,
};

