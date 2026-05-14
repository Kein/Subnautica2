#pragma once
#include "CoreMinimal.h"
#include "GPPGetKIDIDTokenInfo_NoNameEncryption.generated.h"

USTRUCT()
struct GPP_API FGPPGetKIDIDTokenInfo_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 Expires_in;
    
    UPROPERTY()
    FString Id_Token;
    
    UPROPERTY()
    FString Krafton_ID;
    
    FGPPGetKIDIDTokenInfo_NoNameEncryption();
};

