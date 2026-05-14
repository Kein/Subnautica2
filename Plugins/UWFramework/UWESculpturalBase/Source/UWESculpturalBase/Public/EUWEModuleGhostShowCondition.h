#pragma once
#include "CoreMinimal.h"
#include "EUWEModuleGhostShowCondition.generated.h"

UENUM(BlueprintType)
enum class EUWEModuleGhostShowCondition : uint8 {
    None,
    Grow,
    Shrink,
    BuiltFromInside = 4,
    Persistent = 8,
};

