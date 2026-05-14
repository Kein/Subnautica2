#pragma once
#include "CoreMinimal.h"
#include "ESN2StartupConsoleCommandExecuteTime.generated.h"

UENUM(BlueprintType)
enum class ESN2StartupConsoleCommandExecuteTime : uint8 {
    PlayerGameStarted,
    PlayerInitializationIsDone,
};

