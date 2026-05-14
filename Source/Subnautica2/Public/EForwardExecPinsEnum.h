#pragma once
#include "CoreMinimal.h"
#include "EForwardExecPinsEnum.generated.h"

UENUM(BlueprintType)
enum class EForwardExecPinsEnum : uint8 {
    Exec,
    Ignore,
};

