#pragma once
#include "CoreMinimal.h"
#include "SmoketestStepStatus.generated.h"

UENUM(BlueprintType)
enum class SmoketestStepStatus : uint8 {
    NOT_STARTED,
    RUNNING,
    FINISHED,
    FAILED,
};

