#pragma once
#include "CoreMinimal.h"
#include "EUWESelectionNormal.generated.h"

UENUM(BlueprintType)
enum class EUWESelectionNormal : uint8 {
    ExteriorNormal,
    InteriorNormal,
    PlayerLookDirAlignedNormal,
    PlayerLookDirOpposedNormal,
};

