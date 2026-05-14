#pragma once
#include "CoreMinimal.h"
#include "ECommonSessionInformationState.generated.h"

UENUM(BlueprintType)
enum class ECommonSessionInformationState : uint8 {
    OutOfGame,
    Matchmaking,
    InGame,
};

