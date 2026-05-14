#pragma once
#include "CoreMinimal.h"
#include "Temp_User_NoNameEncryption.h"
#include "GPPFriendGroupInfo_BE_NoNameEncryption.generated.h"

USTRUCT()
struct FGPPFriendGroupInfo_BE_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString GroupId;
    
    UPROPERTY()
    FString GroupName;
    
    UPROPERTY()
    TArray<FTemp_User_NoNameEncryption> Friends;
    
    GPP_API FGPPFriendGroupInfo_BE_NoNameEncryption();
};

