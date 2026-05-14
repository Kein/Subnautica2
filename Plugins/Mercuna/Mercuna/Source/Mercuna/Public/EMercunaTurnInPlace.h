#pragma once
#include "CoreMinimal.h"
#include "EMercunaTurnInPlace.generated.h"

UENUM(BlueprintType)
enum class EMercunaTurnInPlace : uint8 {
    Never,
    PreferNotTo,
    Allowed,
};

