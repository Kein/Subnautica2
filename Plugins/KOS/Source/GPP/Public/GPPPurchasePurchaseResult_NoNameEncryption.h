#pragma once
#include "CoreMinimal.h"
#include "GPPPurchasePurchaseResult_NoNameEncryption.generated.h"

USTRUCT()
struct FGPPPurchasePurchaseResult_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString OrderId;
    
    UPROPERTY()
    FString TransactionId;
    
    UPROPERTY()
    FString EntitlementID;
    
    UPROPERTY()
    FString PurchaseCategory;
    
    GPP_API FGPPPurchasePurchaseResult_NoNameEncryption();
};

