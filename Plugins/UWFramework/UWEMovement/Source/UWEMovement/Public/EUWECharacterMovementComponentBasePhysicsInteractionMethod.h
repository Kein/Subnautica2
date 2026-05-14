#pragma once
#include "CoreMinimal.h"
#include "EUWECharacterMovementComponentBasePhysicsInteractionMethod.generated.h"

UENUM(BlueprintType)
enum class EUWECharacterMovementComponentBasePhysicsInteractionMethod : uint8 {
    ApplyForce,
    ApplyVelocity,
};

