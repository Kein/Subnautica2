#pragma once
#include "CoreMinimal.h"
#include "Oauth2Authorize_NoNameEncryption.generated.h"

USTRUCT()
struct GPP_API FOauth2Authorize_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Redirect_to;
    
    UPROPERTY()
    FString Code;
    
    UPROPERTY()
    FString State;
    
    FOauth2Authorize_NoNameEncryption();
};

