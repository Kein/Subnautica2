#pragma once
#include "CoreMinimal.h"
#include "EUWECueActionTarget.generated.h"

UENUM(BlueprintType)
enum class EUWECueActionTarget : uint8 {
    TargetActor,
    Player,
};

