#pragma once
#include "CoreMinimal.h"
#include "ESN2BaseEditType.generated.h"

UENUM(BlueprintType)
enum class ESN2BaseEditType : uint8 {
    None,
    AddCells,
    RemoveCells,
    ModifyBrushType,
    ResetBrushType,
    ChangeVariant,
    PlacePiece,
    PlaceInitialPiece,
};

