#pragma once
#include "CoreMinimal.h"
#include "EUWEForceFeedbackCurve.generated.h"

UENUM(BlueprintType)
enum class EUWEForceFeedbackCurve : uint8 {
    Descend,
    Ascend,
    AscendDescend,
};

