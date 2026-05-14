#pragma once
#include "CoreMinimal.h"
#include "EUWEBTTMoveToNavigationType.generated.h"

UENUM(BlueprintType)
enum class EUWEBTTMoveToNavigationType : uint8 {
    DirectSteering,
    Pathfinding,
};

