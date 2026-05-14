#pragma once
#include "CoreMinimal.h"
#include "ErrorOauthInfo_NoNameEncryption.generated.h"

USTRUCT()
struct GPP_API FErrorOauthInfo_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 ErrorCode;
    
    UPROPERTY(EditAnywhere)
    FString ErrorMessage;
    
    UPROPERTY(EditAnywhere)
    FString Error;
    
    UPROPERTY(EditAnywhere)
    FString Error_Description;
    
    UPROPERTY(EditAnywhere)
    FString Error_uri;
    
    UPROPERTY(EditAnywhere)
    FString Mfa_token;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> Factors;
    
    UPROPERTY(EditAnywhere)
    FString Default_factor;
    
    UPROPERTY(EditAnywhere)
    FString LinkingToken;
    
    UPROPERTY(EditAnywhere)
    FString PlatformId;
    
    UPROPERTY(EditAnywhere)
    FString ClientId;
    
    FErrorOauthInfo_NoNameEncryption();
};

