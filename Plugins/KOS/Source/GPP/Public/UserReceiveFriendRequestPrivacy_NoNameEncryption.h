#pragma once
#include "CoreMinimal.h"
#include "UserReceiveFriendRequestPrivacy_NoNameEncryption.generated.h"

USTRUCT()
struct FUserReceiveFriendRequestPrivacy_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool Allow;
    
    GPP_API FUserReceiveFriendRequestPrivacy_NoNameEncryption();
};

