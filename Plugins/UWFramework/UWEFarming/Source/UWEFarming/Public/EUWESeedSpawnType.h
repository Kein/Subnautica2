#pragma once
#include "CoreMinimal.h"
#include "EUWESeedSpawnType.generated.h"

UENUM(BlueprintType)
enum class EUWESeedSpawnType : uint8 {
    Repeat,
    Once,
    Manual,
};

