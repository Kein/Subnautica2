#pragma once
#include "CoreMinimal.h"
#include "LegalAgreementSummary_NoNameEncryption.h"
#include "AccelByteAgreementUserData_NoNameEncryption.generated.h"

USTRUCT()
struct GPP_API FAccelByteAgreementUserData_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TArray<FLegalAgreementSummary_NoNameEncryption> Agreements;
    
    FAccelByteAgreementUserData_NoNameEncryption();
};

