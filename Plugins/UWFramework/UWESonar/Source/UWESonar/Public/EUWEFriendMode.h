#pragma once
#include "CoreMinimal.h"
#include "EUWEFriendMode.generated.h"

UENUM(BlueprintType)
enum class EUWEFriendMode : uint8 {
    Lobby,
    Offline,
    Singleplayer,
    Multiplayer,
};

