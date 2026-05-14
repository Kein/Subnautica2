#pragma once
#include "CoreMinimal.h"
#include "EUWEVolumeTrackerQueryMode.generated.h"

UENUM(BlueprintType)
enum class EUWEVolumeTrackerQueryMode : uint8 {
    MakeOverlapQueries,
    SubscribeToOverlapEvents,
    ManualVolumeSet,
    MakeAsyncOverlapQueries,
};

