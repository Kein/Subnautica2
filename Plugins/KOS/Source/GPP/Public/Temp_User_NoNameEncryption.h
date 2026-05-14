#pragma once
#include "CoreMinimal.h"
#include "EFriendStatus_NoNameEncryption.h"
#include "Temp_User_NoNameEncryption.generated.h"

USTRUCT()
struct FTemp_User_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString KraftonID;
    
    UPROPERTY()
    FString UserName;
    
    UPROPERTY()
    FString KraftonTag;
    
    UPROPERTY()
    FString DisplayName;
    
    UPROPERTY()
    FString InviteUrl;
    
    UPROPERTY()
    FString Country;
    
    UPROPERTY()
    FString PreferredLanguage;
    
    UPROPERTY()
    FString Icon;
    
    UPROPERTY()
    EFriendStatus_NoNameEncryption FriendStatus;
    
    UPROPERTY()
    FString Memo;
    
    GPP_API FTemp_User_NoNameEncryption();
};

