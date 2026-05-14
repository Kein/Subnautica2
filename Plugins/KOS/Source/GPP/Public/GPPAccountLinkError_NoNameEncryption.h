#pragma once
#include "CoreMinimal.h"
#include "ErrorInfo_NoNameEncryption.h"
#include "GPPAccountLinkError_NoNameEncryption.generated.h"

USTRUCT()
struct GPP_API FGPPAccountLinkError_NoNameEncryption : public FErrorInfo_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 Delete_After;
    
    UPROPERTY()
    FString Access_Token;
    
    UPROPERTY()
    bool is_ga_full_account;
    
    UPROPERTY()
    FString Namespace;
    
    UPROPERTY()
    FString User_Id;
    
    UPROPERTY()
    FString Error_uri;
    
    FGPPAccountLinkError_NoNameEncryption();
};

