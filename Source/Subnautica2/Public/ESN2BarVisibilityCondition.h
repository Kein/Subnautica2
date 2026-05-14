#pragma once
#include "CoreMinimal.h"
#include "ESN2BarVisibilityCondition.generated.h"

UENUM(BlueprintType)
enum class ESN2BarVisibilityCondition : uint8 {
    RecentlyChanged,
    RecentlyIncreased,
    RecentlyDecreased,
    BelowThreshold,
    AboveThreshold,
    Always,
};

