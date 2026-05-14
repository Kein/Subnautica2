#pragma once
#include "CoreMinimal.h"
#include "EMercunaProjectionType.generated.h"

UENUM(BlueprintType)
enum class EMercunaProjectionType : uint8 {
    Up,
    Down,
    UpOrDown,
};

