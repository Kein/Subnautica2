#pragma once
#include "CoreMinimal.h"
#include "GPPPurchaseViolationButtonData_NoNameEncryption.h"
#include "GPPPurchaseViolationLegacy_NoNameEncryption.generated.h"

USTRUCT()
struct FGPPPurchaseViolationLegacy_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool Mandatory;
    
    UPROPERTY()
    FString Title;
    
    UPROPERTY()
    FString Description;
    
    UPROPERTY()
    FString ViewType;
    
    UPROPERTY()
    TArray<FGPPPurchaseViolationButtonData_NoNameEncryption> Buttons;
    
    GPP_API FGPPPurchaseViolationLegacy_NoNameEncryption();
};

