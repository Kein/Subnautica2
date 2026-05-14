#pragma once
#include "CoreMinimal.h"
#include "UWEParamFetchFunction.generated.h"

UENUM(BlueprintType)
enum class UWEParamFetchFunction : uint8 {
    Velocity,
    AngularVelocity,
    Acceleration,
    Magnitude,
    Health,
    StaticValue,
    Custom,
    Depth,
    Distance,
    Scale,
    Energy,
    Oxygen,
};

