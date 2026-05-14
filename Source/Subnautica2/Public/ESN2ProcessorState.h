#pragma once
#include "CoreMinimal.h"
#include "ESN2ProcessorState.generated.h"

UENUM(BlueprintType)
enum class ESN2ProcessorState : uint8 {
    NoRecipe,
    InputMissing,
    Processing,
    OutputFull,
    NoPower,
};

