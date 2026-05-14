#pragma once
#include "CoreMinimal.h"
#include "GPPPurchaseRepaymentInfo_NoNameEncryption.h"
#include "GPPPurchaseRestriction_NoNameEncryption.generated.h"

USTRUCT()
struct FGPPPurchaseRestriction_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString ID;
    
    UPROPERTY()
    FString Namespace;
    
    UPROPERTY()
    FString UserId;
    
    UPROPERTY()
    FString Type;
    
    UPROPERTY()
    FString Behavior;
    
    UPROPERTY()
    int64 CreatedAt;
    
    UPROPERTY()
    int64 UpdatedAt;
    
    UPROPERTY()
    FGPPPurchaseRepaymentInfo_NoNameEncryption RepaymentInfo;
    
    GPP_API FGPPPurchaseRestriction_NoNameEncryption();
};

