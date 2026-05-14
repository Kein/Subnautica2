#pragma once
#include "CoreMinimal.h"
#include "ErrorContent_NoNameEncryption.generated.h"

USTRUCT(BlueprintType)
struct FErrorContent_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 Last_Login_At;
    
    UPROPERTY()
    FString Display_Name;
    
    UPROPERTY()
    FString UserName;
    
    UPROPERTY()
    bool Is_full_kid;
    
    GPP_API FErrorContent_NoNameEncryption();
};

