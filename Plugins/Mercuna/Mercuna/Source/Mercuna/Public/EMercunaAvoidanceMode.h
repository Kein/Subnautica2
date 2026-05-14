#pragma once
#include "CoreMinimal.h"
#include "EMercunaAvoidanceMode.generated.h"

UENUM(BlueprintType)
enum class EMercunaAvoidanceMode : uint8 {
    None,
    ORCA,
    ContextualSteering,
};

