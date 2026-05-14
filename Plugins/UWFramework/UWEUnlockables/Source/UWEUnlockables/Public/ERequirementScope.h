#pragma once
#include "CoreMinimal.h"
#include "ERequirementScope.generated.h"

UENUM(BlueprintType)
enum class ERequirementScope : uint8 {
    Global,
    PlayerSpecific,
};

