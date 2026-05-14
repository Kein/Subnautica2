#pragma once
#include "CoreMinimal.h"
#include "EUWEVolumeTrackerUpdateVolumesMode.generated.h"

UENUM(BlueprintType)
enum class EUWEVolumeTrackerUpdateVolumesMode : uint8 {
    None,
    OnTick,
    OnTransformUpdate,
};

