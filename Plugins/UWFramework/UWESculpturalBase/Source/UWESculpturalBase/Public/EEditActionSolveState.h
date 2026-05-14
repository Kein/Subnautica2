#pragma once
#include "CoreMinimal.h"
#include "EEditActionSolveState.generated.h"

UENUM(BlueprintType)
enum class EEditActionSolveState : uint8 {
    None,
    InProgress,
    Complete,
};

