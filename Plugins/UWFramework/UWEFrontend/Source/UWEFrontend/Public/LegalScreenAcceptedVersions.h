#pragma once
#include "CoreMinimal.h"
#include "LegalScreenAcceptedVersions.generated.h"

USTRUCT(BlueprintType)
struct FLegalScreenAcceptedVersions {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 AcceptedTermsOfServiceVersion;
    
    UPROPERTY()
    int32 AcceptedPrivacyPolicyVersion;
    
    UWEFRONTEND_API FLegalScreenAcceptedVersions();
};

