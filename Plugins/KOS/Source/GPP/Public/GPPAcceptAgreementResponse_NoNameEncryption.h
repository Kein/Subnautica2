#pragma once
#include "CoreMinimal.h"
#include "GPPAcceptAgreementResponse_NoNameEncryption.generated.h"

USTRUCT(BlueprintType)
struct FGPPAcceptAgreementResponse_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool Proceed;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool Comply;
    
    GPP_API FGPPAcceptAgreementResponse_NoNameEncryption();
};

