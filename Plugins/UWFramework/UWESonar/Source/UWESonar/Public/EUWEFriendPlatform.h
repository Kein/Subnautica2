#pragma once
#include "CoreMinimal.h"
#include "EUWEFriendPlatform.generated.h"

UENUM(BlueprintType)
enum class EUWEFriendPlatform : uint8 {
    Standalone,
    ListenServer,
    Client,
};

