#pragma once
#include "CoreMinimal.h"
#include "EUWESaveSystemInitResult.generated.h"

UENUM(BlueprintType)
enum class EUWESaveSystemInitResult : uint8 {
    Invalid,
    CreateNewGameFailed,
    CreateNewGameFailedNoSlots,
    LoadGameFailed,
    Succeeded,
    CreateNewGameSucceeded,
    LoadGameSucceeded,
};

