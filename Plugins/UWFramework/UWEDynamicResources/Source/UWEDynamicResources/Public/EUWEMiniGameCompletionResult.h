#pragma once
#include "CoreMinimal.h"
#include "EUWEMiniGameCompletionResult.generated.h"

UENUM(BlueprintType)
enum class EUWEMiniGameCompletionResult : uint8 {
    Success,
    Failure,
};

