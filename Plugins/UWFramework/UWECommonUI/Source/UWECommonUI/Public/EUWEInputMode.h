#pragma once
#include "CoreMinimal.h"
#include "EUWEInputMode.generated.h"

UENUM(BlueprintType)
enum class EUWEInputMode : uint8 {
    Menu,
    Game,
    All,
    MAX,
};

