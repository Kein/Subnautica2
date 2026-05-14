#pragma once
#include "CoreMinimal.h"
#include "GPPPurchaseSkuMapper_NoNameEncryption.h"
#include "GPPPurchaseSkuMapperList_NoNameEncryption.generated.h"

USTRUCT()
struct FGPPPurchaseSkuMapperList_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FGPPPurchaseSkuMapper_NoNameEncryption> Data;
    
    GPP_API FGPPPurchaseSkuMapperList_NoNameEncryption();
};

