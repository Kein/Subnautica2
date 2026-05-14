#pragma once
#include "CoreMinimal.h"
#include "EBuilderPlacementSurface.generated.h"

UENUM(BlueprintType)
enum class EBuilderPlacementSurface : uint8 {
    None,
    Floating,
    BaseWall,
    BaseFloor = 4,
    BaseCeiling = 8,
    TerrainWall = 16,
    TerrainFloor = 32,
    TerrainCeiling = 64,
};

