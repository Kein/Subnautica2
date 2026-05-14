#pragma once
#include "CoreMinimal.h"
#include "EUWEBaseLockFlags.generated.h"

UENUM(BlueprintType)
enum EUWEBaseLockFlags {
    UWEBaseLockFlags_None,
    UWEBaseLockFlags_ShouldHide,
    UWEBaseLockFlags_Hard,
    UWEBaseLockFlags_EmbeddedActor = 4,
    UWEBaseLockFlags_ShowLockedDecoratorsAsGhost = 8,
};

