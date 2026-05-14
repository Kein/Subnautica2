#pragma once
#include "CoreMinimal.h"
#include "ESN2ControllerOrientation.generated.h"

UENUM(BlueprintType)
enum class ESN2ControllerOrientation : uint8 {
    Default,
    Left,
    Right,
    UpsideDown,
};

