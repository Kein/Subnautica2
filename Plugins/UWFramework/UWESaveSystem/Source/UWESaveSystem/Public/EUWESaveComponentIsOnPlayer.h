#pragma once
#include "CoreMinimal.h"
#include "EUWESaveComponentIsOnPlayer.generated.h"

UENUM(BlueprintType)
enum class EUWESaveComponentIsOnPlayer : uint8 {
    None,
    PlayerCharacter,
    PlayerState,
    PlayerController,
};

