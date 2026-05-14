#pragma once
#include "CoreMinimal.h"
#include "EUWEFriendType.generated.h"

UENUM(BlueprintType)
enum class EUWEFriendType : uint8 {
    SessionPlayer,
    PendingInviteIncoming,
    PendingInviteOutgoing,
    NonPlatformFriend,
    PlatformFriend,
};

