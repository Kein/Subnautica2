#pragma once
#include "CoreMinimal.h"
#include "GPPPurchaseProduct_NoNameEncryption.h"
#include "GPPPurchaseProductList_NoNameEncryption.generated.h"

USTRUCT()
struct FGPPPurchaseProductList_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FGPPPurchaseProduct_NoNameEncryption> Data;
    
    GPP_API FGPPPurchaseProductList_NoNameEncryption();
};

