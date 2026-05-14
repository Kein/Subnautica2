#pragma once
#include "CoreMinimal.h"
#include "ESculpturalCellFlags.generated.h"

UENUM(BlueprintType)
enum ESculpturalCellFlags {
    ESCF_None,
    ESCF_Deleted,
    ESCF_Occupied,
    ESCF_IgnoreBrushTypeForDeconstruct = 4,
    ESCF_Archived = 8,
};

