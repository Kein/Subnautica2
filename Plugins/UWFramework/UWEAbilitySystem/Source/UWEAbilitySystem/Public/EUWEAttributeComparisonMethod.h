#pragma once
#include "CoreMinimal.h"
#include "EUWEAttributeComparisonMethod.generated.h"

UENUM(BlueprintType)
enum class EUWEAttributeComparisonMethod : uint8 {
    WithinRange,
    AboveMinimum,
    BelowMaximum,
};

