#pragma once
#include "CoreMinimal.h"
#include "FUWEStimulusType.generated.h"

UENUM(BlueprintType)
enum class FUWEStimulusType : uint8 {
    None,
    Light,
    Shockwave,
    Heat = 4,
    Electricity = 8,
    Radiation = 16,
    Toxicity = 32,
    ArtificialLight = 64,
};

