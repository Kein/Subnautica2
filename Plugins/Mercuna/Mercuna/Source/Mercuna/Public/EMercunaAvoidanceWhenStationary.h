#pragma once
#include "CoreMinimal.h"
#include "EMercunaAvoidanceWhenStationary.generated.h"

UENUM(BlueprintType)
enum class EMercunaAvoidanceWhenStationary : uint8 {
    None,
    CollisionOnly,
    Full,
};

