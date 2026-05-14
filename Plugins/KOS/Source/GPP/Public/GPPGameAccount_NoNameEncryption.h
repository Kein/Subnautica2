#pragma once
#include "CoreMinimal.h"
#include "GPPPresence_NoNameEncryption.h"
#include "GPPProfile_NoNameEncryption.h"
#include "GPPGameAccount_NoNameEncryption.generated.h"

USTRUCT()
struct FGPPGameAccount_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString UserId;
    
    UPROPERTY()
    FString Namespace;
    
    UPROPERTY()
    FGPPProfile_NoNameEncryption Profile;
    
    UPROPERTY()
    FGPPPresence_NoNameEncryption Presence;
    
    UPROPERTY()
    bool IsFullKid;
    
    GPP_API FGPPGameAccount_NoNameEncryption();
};

