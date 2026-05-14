#pragma once
#include "CoreMinimal.h"
#include "EMercunaNavGraphVolumeOrientation.generated.h"

UENUM(BlueprintType)
enum class EMercunaNavGraphVolumeOrientation : uint8 {
    LinkedRotation,
    RotateVolumesToGraphs,
    NoRotation,
};

