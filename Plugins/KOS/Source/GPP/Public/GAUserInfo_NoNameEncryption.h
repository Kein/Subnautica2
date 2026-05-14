#pragma once
#include "CoreMinimal.h"
#include "JsonObjectWrapper.h"
#include "GaGameAccount_NoNameEncryption.h"
#include "GaPlatform_NoNameEncryption.h"
#include "GaProfile_NoNameEncryption.h"
#include "GAUserInfo_NoNameEncryption.generated.h"

USTRUCT()
struct GPP_API FGAUserInfo_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString Guid;
    
    UPROPERTY(EditAnywhere)
    FString UserName;
    
    UPROPERTY(EditAnywhere)
    bool Activated;
    
    UPROPERTY(EditAnywhere)
    bool EmailOptIn;
    
    UPROPERTY(EditAnywhere)
    TMap<FString, FJsonObjectWrapper> Authentications;
    
    UPROPERTY(EditAnywhere)
    TMap<FString, FGaPlatform_NoNameEncryption> Platforms;
    
    UPROPERTY(EditAnywhere)
    FGaProfile_NoNameEncryption Profile;
    
    UPROPERTY(EditAnywhere)
    TArray<FGaGameAccount_NoNameEncryption> GameAccounts;
    
    FGAUserInfo_NoNameEncryption();
};

