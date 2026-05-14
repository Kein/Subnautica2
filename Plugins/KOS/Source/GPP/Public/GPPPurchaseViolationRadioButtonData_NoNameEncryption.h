#pragma once
#include "CoreMinimal.h"
#include "GPPPurchaseViolationRadioButtonData_NoNameEncryption.generated.h"

USTRUCT()
struct FGPPPurchaseViolationRadioButtonData_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Title;
    
    UPROPERTY()
    FString Value;
    
    UPROPERTY()
    bool Selected;
    
    GPP_API FGPPPurchaseViolationRadioButtonData_NoNameEncryption();
};

