#pragma once
#include "CoreMinimal.h"
#include "EMercunaProjectionDirection.generated.h"

UENUM(BlueprintType)
enum class EMercunaProjectionDirection : uint8 {
    Down,
    Up,
    Closest,
};

