#pragma once
#include "CoreMinimal.h"
#include "EUWESaveDataUpgradeResult.generated.h"

UENUM(BlueprintType)
enum class EUWESaveDataUpgradeResult : uint8 {
    Failed_Invalidate_Data,
    Failed_Catastrophic,
    Success,
    Invalid_Result,
};

