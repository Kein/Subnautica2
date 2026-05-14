#pragma once
#include "CoreMinimal.h"
#include "EGPPWidgetLayoutStyle.generated.h"

UENUM(BlueprintType)
enum class EGPPWidgetLayoutStyle : uint8 {
    Default,
    PC,
    Playstation,
    XBox,
    Mobile,
    Web,
    Max,
};

