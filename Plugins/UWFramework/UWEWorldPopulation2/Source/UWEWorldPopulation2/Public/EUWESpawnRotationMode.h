#pragma once
#include "CoreMinimal.h"
#include "EUWESpawnRotationMode.generated.h"

UENUM(BlueprintType)
enum class EUWESpawnRotationMode : uint8 {
    UpPointsToNormal,
    ForwardPointsToNormal,
};

