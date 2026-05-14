#pragma once
#include "CoreMinimal.h"
#include "EUWESaveSlotFilter.generated.h"

UENUM(BlueprintType)
enum class EUWESaveSlotFilter : uint8 {
    Standalone,
    ListenServer,
    CloudHosted,
    AnyMultiplayer,
    Any,
};

