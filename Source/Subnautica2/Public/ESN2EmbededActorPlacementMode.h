#pragma once
#include "CoreMinimal.h"
#include "ESN2EmbededActorPlacementMode.generated.h"

UENUM(BlueprintType)
enum class ESN2EmbededActorPlacementMode : uint8 {
    PlaceAtReferenceFrame,
    AlignWithEditedCellModule,
};

