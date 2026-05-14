#pragma once
#include "CoreMinimal.h"
#include "UWEPCGSpatialNoiseMode.generated.h"

UENUM(BlueprintType)
enum UWEPCGSpatialNoiseMode {
    Perlin2D,
    Caustic2D,
    Voronoi2D,
    FractionalBrownian2D,
    EdgeMask2D,
};

