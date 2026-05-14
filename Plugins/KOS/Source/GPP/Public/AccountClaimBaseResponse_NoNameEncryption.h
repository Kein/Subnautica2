#pragma once
#include "CoreMinimal.h"
#include "AccountClaimBaseResponse_NoNameEncryption.generated.h"

USTRUCT()
struct GPP_API FAccountClaimBaseResponse_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 Code;
    
    UPROPERTY(EditAnywhere)
    FString Message;
    
    FAccountClaimBaseResponse_NoNameEncryption();
};

