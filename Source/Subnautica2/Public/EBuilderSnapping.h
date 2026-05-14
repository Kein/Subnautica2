#pragma once
#include "CoreMinimal.h"
#include "EBuilderSnapping.generated.h"

UENUM(BlueprintType)
enum class EBuilderSnapping : uint8 {
    Freeform,
    Base,
    None,
};

