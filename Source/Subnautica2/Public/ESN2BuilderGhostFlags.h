#pragma once
#include "CoreMinimal.h"
#include "ESN2BuilderGhostFlags.generated.h"

UENUM(BlueprintType)
enum class ESN2BuilderGhostFlags : uint8 {
    None,
    Grow,
    Shrink,
    BuiltFromInside = 4,
    Persistent = 8,
    NeedsCollisions = 16,
    Deconstruct = 32,
    UseSeparateMeshForOverlay = 64,
};

