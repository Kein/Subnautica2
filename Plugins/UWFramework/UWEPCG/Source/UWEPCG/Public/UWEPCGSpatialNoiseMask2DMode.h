#pragma once
#include "CoreMinimal.h"
#include "UWEPCGSpatialNoiseMask2DMode.generated.h"

UENUM(BlueprintType)
enum UWEPCGSpatialNoiseMask2DMode {
    Perlin,
    Caustic,
    FractionalBrownian,
};

