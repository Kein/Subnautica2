#pragma once
#include "CoreMinimal.h"
#include "GPPAccount_NoNameEncryption.h"
#include "GPPFriendGroupInfo_NoNameEncryption.h"
#include "GPPFriends_NoNameEncryption.generated.h"

USTRUCT()
struct FGPPFriends_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FGPPAccount_NoNameEncryption> UnGroupedFriends;
    
    UPROPERTY()
    TArray<FGPPFriendGroupInfo_NoNameEncryption> GroupedFriends;
    
    GPP_API FGPPFriends_NoNameEncryption();
};

