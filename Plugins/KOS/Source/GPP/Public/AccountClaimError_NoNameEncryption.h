#pragma once
#include "CoreMinimal.h"
#include "AccountClaimBaseResponse_NoNameEncryption.h"
#include "AccountClaimError_NoNameEncryption.generated.h"

USTRUCT()
struct GPP_API FAccountClaimError_NoNameEncryption : public FAccountClaimBaseResponse_NoNameEncryption {
    GENERATED_BODY()
public:
    FAccountClaimError_NoNameEncryption();
};

