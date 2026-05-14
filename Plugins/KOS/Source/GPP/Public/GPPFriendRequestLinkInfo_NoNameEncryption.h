#pragma once
#include "CoreMinimal.h"
#include "GPPFriendRequestLinkInfo_NoNameEncryption.generated.h"

USTRUCT()
struct FGPPFriendRequestLinkInfo_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString InviteUrl;
    
    GPP_API FGPPFriendRequestLinkInfo_NoNameEncryption();
};

