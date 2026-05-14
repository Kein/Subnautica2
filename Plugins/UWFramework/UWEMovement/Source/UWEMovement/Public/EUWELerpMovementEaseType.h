#pragma once
#include "CoreMinimal.h"
#include "EUWELerpMovementEaseType.generated.h"

UENUM(BlueprintType)
enum class EUWELerpMovementEaseType : uint8 {
    None,
    In,
    Out,
    InOut,
};

