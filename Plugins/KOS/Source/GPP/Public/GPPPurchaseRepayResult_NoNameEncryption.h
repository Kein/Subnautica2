#pragma once
#include "CoreMinimal.h"
#include "GPPPurchaseRepayResult_NoNameEncryption.generated.h"

USTRUCT()
struct FGPPPurchaseRepayResult_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString RestrictionId;
    
    UPROPERTY()
    FString Store;
    
    UPROPERTY()
    FString ErrorCode;
    
    UPROPERTY()
    FString ErrorMessage;
    
    GPP_API FGPPPurchaseRepayResult_NoNameEncryption();
};

