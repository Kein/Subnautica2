#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsAcceptAgreementResponse_NoNameEncryption.generated.h"

USTRUCT(BlueprintType)
struct GPP_API FAccelByteModelsAcceptAgreementResponse_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Proceed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Comply;
    
    FAccelByteModelsAcceptAgreementResponse_NoNameEncryption();
};

