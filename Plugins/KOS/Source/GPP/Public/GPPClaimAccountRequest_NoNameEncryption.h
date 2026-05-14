#pragma once
#include "CoreMinimal.h"
#include "GPPClaimAccountRequest_NoNameEncryption.generated.h"

USTRUCT()
struct GPP_API FGPPClaimAccountRequest_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString PlatformId;
    
    UPROPERTY(EditAnywhere)
    FString PlatformToken;
    
    FGPPClaimAccountRequest_NoNameEncryption();
};

