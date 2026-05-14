#pragma once
#include "CoreMinimal.h"
#include "GPPClaimAccountResponse_NoNameEncryption.generated.h"

USTRUCT()
struct GPP_API FGPPClaimAccountResponse_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString LinkCode;
    
    UPROPERTY(EditAnywhere)
    int64 ExpiresAt;
    
    UPROPERTY(EditAnywhere)
    FString LinkURL;
    
    UPROPERTY(EditAnywhere)
    int32 Code;
    
    UPROPERTY(EditAnywhere)
    FString Message;
    
    FGPPClaimAccountResponse_NoNameEncryption();
};

