#pragma once
#include "CoreMinimal.h"
#include "EMercunaModifierVolumeShape.generated.h"

UENUM(BlueprintType)
enum class EMercunaModifierVolumeShape : uint8 {
    Box,
    Sphere,
    Cylinder,
    Prism,
};

