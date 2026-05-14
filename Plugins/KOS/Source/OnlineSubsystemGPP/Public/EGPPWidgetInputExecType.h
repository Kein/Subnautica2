#pragma once
#include "CoreMinimal.h"
#include "EGPPWidgetInputExecType.generated.h"

UENUM(BlueprintType)
enum class EGPPWidgetInputExecType : uint8 {
    None,
    Cancel,
    Select,
    ScrollMove,
    OpenWebBrowser,
    Start,
    OpenDetail,
    AcceptAllAndStart,
    Close,
};

