#pragma once
#include "CoreMinimal.h"
#include "EMercunaNavigationType.generated.h"

UENUM(BlueprintType)
enum class EMercunaNavigationType : uint8 {
    ThreeDimensional,
    Ground,
    Surface,
    Invalid,
};

