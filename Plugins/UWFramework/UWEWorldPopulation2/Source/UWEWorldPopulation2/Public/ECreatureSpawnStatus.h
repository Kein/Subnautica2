#pragma once
#include "CoreMinimal.h"
#include "ECreatureSpawnStatus.generated.h"

UENUM(BlueprintType)
enum class ECreatureSpawnStatus : uint8 {
    Invalid,
    Unloaded,
    Spawned,
};

