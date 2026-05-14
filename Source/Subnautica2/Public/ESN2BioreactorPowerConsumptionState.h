#pragma once
#include "CoreMinimal.h"
#include "ESN2BioreactorPowerConsumptionState.generated.h"

UENUM(BlueprintType)
enum class ESN2BioreactorPowerConsumptionState : uint8 {
    Off,
    Normal,
    Overdrive,
};

