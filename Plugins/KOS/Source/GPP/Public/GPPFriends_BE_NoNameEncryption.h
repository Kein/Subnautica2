#pragma once
#include "CoreMinimal.h"
#include "GPPFriendGroupInfo_BE_NoNameEncryption.h"
#include "Temp_User_NoNameEncryption.h"
#include "GPPFriends_BE_NoNameEncryption.generated.h"

USTRUCT()
struct FGPPFriends_BE_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FTemp_User_NoNameEncryption> UnGroupedFriends;
    
    UPROPERTY()
    TArray<FGPPFriendGroupInfo_BE_NoNameEncryption> GroupedFriends;
    
    GPP_API FGPPFriends_BE_NoNameEncryption();
};

