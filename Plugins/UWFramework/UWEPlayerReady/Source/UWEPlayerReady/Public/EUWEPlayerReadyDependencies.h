#pragma once
#include "CoreMinimal.h"
#include "EUWEPlayerReadyDependencies.generated.h"

UENUM(BlueprintType)
enum class EUWEPlayerReadyDependencies : uint8 {
    None,
    RecPlayerState,
    ControllerPossessedPawn,
    CharacterRecPlayerState = 4,
    CharacterPossessedByController = 8,
    GameState = 16,
    PlayerReadyAuthCallback = 32,
    ControllerAckPawnOnServer = 64,
    MainPlayerCharacter = 128,
    All = 159,
    AllAuth = 191,
    AnyPlayer = 21,
};

