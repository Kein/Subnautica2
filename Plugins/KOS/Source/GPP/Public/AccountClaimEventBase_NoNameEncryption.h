#pragma once
#include "CoreMinimal.h"
#include "AccountClaimError_NoNameEncryption.h"
#include "AccountClaimEventBase_NoNameEncryption.generated.h"

USTRUCT()
struct GPP_API FAccountClaimEventBase_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAccountClaimError_NoNameEncryption Error;
    
    FAccountClaimEventBase_NoNameEncryption();
};

