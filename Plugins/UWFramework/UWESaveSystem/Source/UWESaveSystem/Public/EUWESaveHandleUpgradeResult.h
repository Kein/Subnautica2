#pragma once
#include "CoreMinimal.h"
#include "EUWESaveHandleUpgradeResult.generated.h"

UENUM(BlueprintType)
enum class EUWESaveHandleUpgradeResult : uint8 {
    InvalidResult,
    InvalidateData,
    FailedCatastrophic,
    Success,
};

