#pragma once
#include "CoreMinimal.h"
#include "EUWEPlacementVolumeObjectType.generated.h"

UENUM(BlueprintType)
enum class EUWEPlacementVolumeObjectType : uint8 {
    None,
    BuilderBlocker,
    Pawn,
};

