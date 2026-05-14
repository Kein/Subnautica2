#pragma once
#include "CoreMinimal.h"
#include "EUWEUserPrivilege.generated.h"

UENUM(BlueprintType)
enum class EUWEUserPrivilege : uint8 {
    CanPlayGame,
    CanPlayOnline,
    CanPlayCrossplay,
    CanShareSaves,
};

