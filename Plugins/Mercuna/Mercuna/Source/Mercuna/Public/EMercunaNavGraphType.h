#pragma once
#include "CoreMinimal.h"
#include "EMercunaNavGraphType.generated.h"

UENUM(BlueprintType)
enum class EMercunaNavGraphType : uint8 {
    ThreeDimensional,
    Ground,
    Surface,
    Invalid,
};

