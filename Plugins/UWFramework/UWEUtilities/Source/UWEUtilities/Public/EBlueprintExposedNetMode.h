#pragma once
#include "CoreMinimal.h"
#include "EBlueprintExposedNetMode.generated.h"

UENUM(BlueprintType)
enum class EBlueprintExposedNetMode : uint8 {
    Standalone,
    DedicatedServer,
    ListenServer,
    Client,
};

