#pragma once
#include "CoreMinimal.h"
#include "GPPPurchaseRepaymentInfo_NoNameEncryption.generated.h"

USTRUCT()
struct FGPPPurchaseRepaymentInfo_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString ProductId;
    
    UPROPERTY()
    int64 PurchaseAt;
    
    UPROPERTY()
    int64 RefundAt;
    
    UPROPERTY()
    FString TransactionId;
    
    UPROPERTY()
    FString Store;
    
    GPP_API FGPPPurchaseRepaymentInfo_NoNameEncryption();
};

