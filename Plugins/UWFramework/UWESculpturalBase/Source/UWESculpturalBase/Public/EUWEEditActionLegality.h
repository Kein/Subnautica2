#pragma once
#include "CoreMinimal.h"
#include "EUWEEditActionLegality.generated.h"

UENUM(BlueprintType)
enum class EUWEEditActionLegality : uint8 {
    Illegal_NoValidCells,
    Illegal_BlockedByLock,
    Illegal_BlockedByHardLock,
    Illegal_BrushTypeMismatch,
    Illegal_BlockedByCollision,
    Illegal_EmptySelection,
    Illegal_OversizedSelection,
    Illegal_ExceedsGlobalMaxCellCount,
    Illegal_BlockedByOccupancyChange,
    Illegal_BlockedByUnsupportedCells,
    Illegal_ModifyingArchivedCellsNoValidCells,
    Illegal_ModifyingArchivedCells,
    Illegal_InvalidSupports,
    Invalid_NotYetCalculated,
    Success,
};

