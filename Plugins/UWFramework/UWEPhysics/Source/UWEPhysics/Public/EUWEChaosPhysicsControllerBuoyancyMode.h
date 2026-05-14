#pragma once
#include "CoreMinimal.h"
#include "EUWEChaosPhysicsControllerBuoyancyMode.generated.h"

UENUM(BlueprintType)
enum class EUWEChaosPhysicsControllerBuoyancyMode : uint8 {
    None,
    PhysicsFormula,
    BespokeAcceleration,
};

