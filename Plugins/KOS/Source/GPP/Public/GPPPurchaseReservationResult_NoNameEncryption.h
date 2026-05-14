#pragma once
#include "CoreMinimal.h"
#include "GPPPurchaseViolation_NoNameEncryption.h"
#include "GPPPurchaseReservationResult_NoNameEncryption.generated.h"

USTRUCT()
struct FGPPPurchaseReservationResult_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString UID;
    
    UPROPERTY()
    TArray<FGPPPurchaseViolation_NoNameEncryption> Violations;
    
    GPP_API FGPPPurchaseReservationResult_NoNameEncryption();
};

