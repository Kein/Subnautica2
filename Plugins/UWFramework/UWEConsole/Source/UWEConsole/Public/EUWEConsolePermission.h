#pragma once
#include "CoreMinimal.h"
#include "EUWEConsolePermission.generated.h"

UENUM(BlueprintType)
enum class EUWEConsolePermission : uint8 {
    Cheat,
    Debug,
    Restricted,
};

