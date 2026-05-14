#pragma once
#include "CoreMinimal.h"
#include "EBuilderPlacementZone.generated.h"

UENUM(BlueprintType)
enum class EBuilderPlacementZone : uint8 {
    None,
    Water,
    Interior,
    Air = 4,
    Current = 8,
    AnyNonCurrent = 7,
    Any = 15,
};

