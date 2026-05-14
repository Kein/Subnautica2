#pragma once
#include "CoreMinimal.h"
#include "ErrorInfo_NoNameEncryption.h"
#include "GPPOauthError_NoNameEncryption.generated.h"

USTRUCT()
struct GPP_API FGPPOauthError_NoNameEncryption : public FErrorInfo_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Ban_Type;
    
    UPROPERTY()
    FString Reason;
    
    UPROPERTY()
    FString Reason_Title;
    
    UPROPERTY()
    FString Reason_Details;
    
    UPROPERTY()
    int64 Start_Date;
    
    UPROPERTY()
    int64 End_Date;
    
    UPROPERTY()
    FString Error_uri;
    
    UPROPERTY()
    int32 Delete_After;
    
    UPROPERTY()
    FString User_Id;
    
    UPROPERTY()
    FString Access_Token;
    
    UPROPERTY()
    float Expires_in;
    
    UPROPERTY()
    FString Refresh_Token;
    
    UPROPERTY()
    int32 Refresh_Expires_in;
    
    UPROPERTY()
    FString Redirect_URI;
    
    UPROPERTY()
    FString WS_URI;
    
    UPROPERTY()
    FString Country;
    
    UPROPERTY()
    FString Platform_user_id;
    
    FGPPOauthError_NoNameEncryption();
};

