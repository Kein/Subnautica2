#pragma once
#include "CoreMinimal.h"
#include "EUWEButtonInteractabilityState.generated.h"

UENUM(BlueprintType)
enum class EUWEButtonInteractabilityState : uint8 {
    Unset,
    On,
    Off,
};

