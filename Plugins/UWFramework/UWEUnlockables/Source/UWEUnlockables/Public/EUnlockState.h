#pragma once
#include "CoreMinimal.h"
#include "EUnlockState.generated.h"

UENUM(BlueprintType)
enum class EUnlockState : uint8 {
    Locked,
    Unlocked,
};

