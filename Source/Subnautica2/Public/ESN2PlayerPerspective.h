#pragma once
#include "CoreMinimal.h"
#include "ESN2PlayerPerspective.generated.h"

UENUM(BlueprintType)
enum class ESN2PlayerPerspective : uint8 {
    FirstPerson,
    ThirdPerson,
    Undefined,
};

