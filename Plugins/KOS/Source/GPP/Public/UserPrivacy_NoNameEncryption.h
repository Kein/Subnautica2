#pragma once
#include "CoreMinimal.h"
#include "UserPlayInfoPrivacy_NoNameEncryption.h"
#include "UserReceiveFriendRequestPrivacy_NoNameEncryption.h"
#include "UserSearchablePrivacy_NoNameEncryption.h"
#include "UserPrivacy_NoNameEncryption.generated.h"

USTRUCT()
struct FUserPrivacy_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY()
    FUserPlayInfoPrivacy_NoNameEncryption PlayInfo;
    
    UPROPERTY()
    FUserReceiveFriendRequestPrivacy_NoNameEncryption FriendRequest;
    
    UPROPERTY()
    FUserSearchablePrivacy_NoNameEncryption Searchable;
    
    GPP_API FUserPrivacy_NoNameEncryption();
};

