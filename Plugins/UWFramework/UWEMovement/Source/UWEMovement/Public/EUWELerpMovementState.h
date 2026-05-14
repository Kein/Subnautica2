#pragma once
#include "CoreMinimal.h"
#include "EUWELerpMovementState.generated.h"

UENUM(BlueprintType)
enum class EUWELerpMovementState : uint8 {
    Empty,
    ReadyToStart,
    Started,
    Stopped,
    Completed,
};

