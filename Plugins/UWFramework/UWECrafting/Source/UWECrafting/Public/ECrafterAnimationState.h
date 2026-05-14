#pragma once
#include "CoreMinimal.h"
#include "ECrafterAnimationState.generated.h"

UENUM(BlueprintType)
enum class ECrafterAnimationState : uint8 {
    ReadyToStartCraft,
    ReadyToSpawnProxy,
    Busy,
    Deactivated,
};

