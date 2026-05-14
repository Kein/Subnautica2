#pragma once
#include "CoreMinimal.h"
#include "FUWETriggerOverlapType.generated.h"

UENUM(BlueprintType)
enum class FUWETriggerOverlapType : uint8 {
    Any,
    OnEnter,
    OnExit,
};

