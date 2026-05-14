#pragma once
#include "CoreMinimal.h"
#include "ESN2EnableChromaticAberrationSetting.generated.h"

UENUM(BlueprintType)
enum class ESN2EnableChromaticAberrationSetting : uint8 {
    Off,
    On,
    Num,
};

