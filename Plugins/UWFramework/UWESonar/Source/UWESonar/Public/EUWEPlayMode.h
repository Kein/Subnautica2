#pragma once
#include "CoreMinimal.h"
#include "EUWEPlayMode.generated.h"

UENUM(BlueprintType)
enum class EUWEPlayMode : uint8 {
    None,
    Lobby,
    Singleplayer,
    Multiplayer,
    Server,
};

