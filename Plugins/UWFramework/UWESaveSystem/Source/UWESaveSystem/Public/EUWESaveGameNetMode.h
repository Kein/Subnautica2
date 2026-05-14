#pragma once
#include "CoreMinimal.h"
#include "EUWESaveGameNetMode.generated.h"

UENUM(BlueprintType)
enum class EUWESaveGameNetMode : uint8 {
    Standalone,
    ListenServer,
    CloudHosted,
};

