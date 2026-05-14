#pragma once
#include "CoreMinimal.h"
#include "EStartMoveState.generated.h"

UENUM(BlueprintType)
enum class EStartMoveState : uint8 {
    Unset,
    Completed,
    Failed,
};

