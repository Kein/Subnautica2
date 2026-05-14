#pragma once
#include "CoreMinimal.h"
#include "EUWEWorldPopDirection.generated.h"

UENUM(BlueprintType)
enum class EUWEWorldPopDirection : uint8 {
    Floor,
    Walls,
    Ceiling,
};

