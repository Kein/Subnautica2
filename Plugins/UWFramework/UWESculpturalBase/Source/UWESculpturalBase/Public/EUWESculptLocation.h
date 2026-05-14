#pragma once
#include "CoreMinimal.h"
#include "EUWESculptLocation.generated.h"

UENUM(BlueprintType)
enum class EUWESculptLocation : uint8 {
    None,
    Floor,
    Wall,
    Ceiling = 4,
    Floating = 8,
};

