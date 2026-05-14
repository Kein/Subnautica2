#pragma once
#include "CoreMinimal.h"
#include "GPPPurchaseProduct_NoNameEncryption.generated.h"

USTRUCT()
struct FGPPPurchaseProduct_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString PlatformProductId;
    
    GPP_API FGPPPurchaseProduct_NoNameEncryption();
};

