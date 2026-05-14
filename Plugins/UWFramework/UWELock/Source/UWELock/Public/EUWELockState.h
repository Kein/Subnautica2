#pragma once
#include "CoreMinimal.h"
#include "EUWELockState.generated.h"

UENUM(BlueprintType)
enum class EUWELockState : uint8 {
    Unset,
    Locked,
    Unlocked,
};

