#pragma once
#include "CoreMinimal.h"
#include "ESN2AllowBackgroundAudioSetting.generated.h"

UENUM(BlueprintType)
enum class ESN2AllowBackgroundAudioSetting : uint8 {
    Off,
    AllSounds,
    Num,
};

