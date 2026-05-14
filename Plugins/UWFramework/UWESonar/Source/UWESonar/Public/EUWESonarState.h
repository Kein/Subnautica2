#pragma once
#include "CoreMinimal.h"
#include "EUWESonarState.generated.h"

UENUM(BlueprintType)
enum class EUWESonarState : uint8 {
    None,
    JoiningGame,
    CreatingGame,
};

