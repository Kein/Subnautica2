#pragma once
#include "CoreMinimal.h"
#include "EUWEMovementComponentInfluenceType.generated.h"

UENUM(BlueprintType)
enum class EUWEMovementComponentInfluenceType : uint8 {
    Force,
    Acceleration,
    Impulse,
    Velocity,
};

