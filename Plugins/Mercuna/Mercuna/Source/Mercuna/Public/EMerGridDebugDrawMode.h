#pragma once
#include "CoreMinimal.h"
#include "EMerGridDebugDrawMode.generated.h"

UENUM(BlueprintType)
enum class EMerGridDebugDrawMode : uint8 {
    DISABLED,
    GRID,
    POLYMESH,
    QUERY,
};

