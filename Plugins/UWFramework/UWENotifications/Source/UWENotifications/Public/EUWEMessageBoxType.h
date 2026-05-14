#pragma once
#include "CoreMinimal.h"
#include "EUWEMessageBoxType.generated.h"

UENUM(BlueprintType)
enum class EUWEMessageBoxType : uint8 {
    Ok,
    Continue,
    ContinueCancel,
    YesNo,
};

