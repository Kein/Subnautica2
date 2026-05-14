#pragma once
#include "CoreMinimal.h"
#include "EAccelByteAgreementPolicyType_NoNameEncryption.generated.h"

UENUM(BlueprintType)
enum class EAccelByteAgreementPolicyType_NoNameEncryption : uint8 {
    ALL,
    LEGAL_DOCUMENT_TYPE,
    MARKETING_PREFERENCE_TYPE,
    ECOMMERCE_TYPE,
};

