#pragma once
#include "CoreMinimal.h"
#include "EAnchorOrientation.generated.h"

UENUM(BlueprintType)
enum class EAnchorOrientation : uint8 {
    Bottom,
    Back,
    Top,
    Max,
};

