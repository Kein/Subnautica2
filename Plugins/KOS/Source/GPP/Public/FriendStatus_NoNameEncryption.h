#pragma once
#include "CoreMinimal.h"
#include "FriendStatus_NoNameEncryption.generated.h"

USTRUCT()
struct FFriendStatus_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bBlockUser;
    
    UPROPERTY()
    bool bMyFriend;
    
    UPROPERTY()
    bool bReceivedFriendRequest;
    
    UPROPERTY()
    FString Memo;
    
    GPP_API FFriendStatus_NoNameEncryption();
};

