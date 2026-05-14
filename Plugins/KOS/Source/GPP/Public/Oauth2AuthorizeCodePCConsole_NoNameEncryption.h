#pragma once
#include "CoreMinimal.h"
#include "Oauth2AuthorizeCodePCConsole_NoNameEncryption.generated.h"

USTRUCT()
struct GPP_API FOauth2AuthorizeCodePCConsole_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Code;
    
    UPROPERTY()
    FString Email;
    
    UPROPERTY()
    FString KTag;
    
    UPROPERTY()
    FString State;
    
    UPROPERTY()
    FString Device_Code;
    
    UPROPERTY()
    int32 Error_Code;
    
    UPROPERTY()
    int32 Expires_in;
    
    UPROPERTY()
    FString RedirectURI;
    
    UPROPERTY()
    FString UserCode;
    
    UPROPERTY()
    FString Verification_URI;
    
    UPROPERTY()
    FString Redirect_URI;
    
    UPROPERTY()
    FString WS_URI;
    
    UPROPERTY()
    FString ClientId;
    
    UPROPERTY()
    FString Default_factor;
    
    UPROPERTY()
    FString Error;
    
    UPROPERTY()
    FString Error_Description;
    
    UPROPERTY()
    FString Error_uri;
    
    UPROPERTY()
    TArray<FString> Factors;
    
    UPROPERTY()
    FString LinkingToken;
    
    UPROPERTY()
    FString Mfa_token;
    
    UPROPERTY()
    FString PlatformId;
    
    UPROPERTY()
    FString User_Code;
    
    FOauth2AuthorizeCodePCConsole_NoNameEncryption();
};

