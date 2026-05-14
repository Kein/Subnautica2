#pragma once
#include "CoreMinimal.h"
#include "EGhostPrimitiveType.generated.h"

UENUM(BlueprintType)
enum class EGhostPrimitiveType : uint8 {
    None,
    StaticMesh,
    SkeletalMesh,
    Box,
    Sphere,
    Capsule,
};

