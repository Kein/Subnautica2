#pragma once
#include "CoreMinimal.h"
#include "EUWEToolBatteryVisibility.generated.h"

UENUM()
enum class EUWEToolBatteryVisibility : int32 {
    HiddenWhenNotEquipped,
    HiddenWhenEquipped,
    AlwaysVisible,
};

