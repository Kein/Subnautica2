#pragma once
#include "CoreMinimal.h"
#include "ESN2PiecePlacementMode.generated.h"

UENUM(BlueprintType)
enum class ESN2PiecePlacementMode : uint8 {
    OffsetFromSelection,
    PlaceAsObject,
};

