#pragma once
#include "CoreMinimal.h"
#include "EUWEFriendNetMode.generated.h"

UENUM(BlueprintType)
enum class EUWEFriendNetMode : uint8 {
    Standalone,
    ListenServer,
    Client,
};

