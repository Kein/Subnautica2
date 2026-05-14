#pragma once
#include "CoreMinimal.h"
#include "FUWEStimulusIntensity.generated.h"

UENUM(BlueprintType)
enum class FUWEStimulusIntensity : uint8 {
    None,
    Low,
    Medium,
    High = 4,
};

