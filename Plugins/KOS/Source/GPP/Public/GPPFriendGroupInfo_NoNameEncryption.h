#pragma once
#include "CoreMinimal.h"
#include "GPPAccount_NoNameEncryption.h"
#include "GPPFriendGroupInfo_NoNameEncryption.generated.h"

USTRUCT()
struct FGPPFriendGroupInfo_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString GroupId;
    
    UPROPERTY()
    FString GroupName;
    
    UPROPERTY()
    TArray<FGPPAccount_NoNameEncryption> Friends;
    
    GPP_API FGPPFriendGroupInfo_NoNameEncryption();
};

