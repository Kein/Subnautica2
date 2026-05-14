#pragma once
#include "CoreMinimal.h"
#include "FriendStatus_NoNameEncryption.h"
#include "GPPGameAccount_NoNameEncryption.h"
#include "GPPPresence_NoNameEncryption.h"
#include "GPPProfile_NoNameEncryption.h"
#include "GPPAccount_NoNameEncryption.generated.h"

USTRUCT()
struct FGPPAccount_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bIsMyAccount;
    
    UPROPERTY()
    FString KID;
    
    UPROPERTY()
    FString KraftonTag;
    
    UPROPERTY()
    FGPPProfile_NoNameEncryption Profile;
    
    UPROPERTY()
    FGPPPresence_NoNameEncryption Presence;
    
    UPROPERTY()
    FFriendStatus_NoNameEncryption Friend_Status;
    
    UPROPERTY()
    bool Has_Play_History;
    
    UPROPERTY()
    TArray<FGPPGameAccount_NoNameEncryption> GameAccountList;
    
    GPP_API FGPPAccount_NoNameEncryption();
};

