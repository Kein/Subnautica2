#pragma once
#include "CoreMinimal.h"
#include "EMercunaDeepWaterMode.generated.h"

UENUM(BlueprintType)
enum class EMercunaDeepWaterMode : uint8 {
    Unnavigable,
    NavigateOnBottom,
    NavigateOnSurface,
};

