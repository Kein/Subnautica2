#pragma once
#include "CoreMinimal.h"
#include "EUWECellBorderShowMode.generated.h"

UENUM(BlueprintType)
enum class EUWECellBorderShowMode : uint8 {
    DoNotShow,
    Simple,
    BrushType,
    Section,
    Occupancy,
    Structure,
    Locked,
    RenderProxyHandle,
    ISMAssignment,
    InteriorCorners,
    Archive,
};

