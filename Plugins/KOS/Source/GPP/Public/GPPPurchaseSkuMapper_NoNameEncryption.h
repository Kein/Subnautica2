#pragma once
#include "CoreMinimal.h"
#include "GPPPurchaseSkuMapper_NoNameEncryption.generated.h"

USTRUCT()
struct FGPPPurchaseSkuMapper_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString GppProductId;
    
    UPROPERTY()
    FString Sku;
    
    UPROPERTY()
    FString SkuType;
    
    UPROPERTY()
    TMap<FString, FString> Providers;
    
    GPP_API FGPPPurchaseSkuMapper_NoNameEncryption();
};

