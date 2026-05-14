#pragma once
#include "CoreMinimal.h"
#include "ESN2FramePacingMode.generated.h"

UENUM(BlueprintType)
enum class ESN2FramePacingMode : uint8 {
    DesktopStyle,
    ConsoleStyle,
    MobileStyle,
};

