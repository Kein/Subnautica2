#pragma once
#include "CoreMinimal.h"
#include "ErrorContent_NoNameEncryption.h"
#include "ErrorInfo_NoNameEncryption.generated.h"

USTRUCT()
struct GPP_API FErrorInfo_NoNameEncryption {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    int32 NumericErrorCode;
    
    UPROPERTY()
    int32 ErrorCode;
    
    UPROPERTY()
    int32 Code;
    
    UPROPERTY()
    int32 Error_Code;
    
    UPROPERTY()
    int32 ResponseCode;
    
    UPROPERTY()
    FString ErrorMessage;
    
    UPROPERTY()
    FString Message;
    
    UPROPERTY()
    FString Error;
    
    UPROPERTY()
    FString Error_Description;
    
    UPROPERTY()
    TMap<FString, FErrorContent_NoNameEncryption> Error_Body;
    
public:
    FErrorInfo_NoNameEncryption();
};

