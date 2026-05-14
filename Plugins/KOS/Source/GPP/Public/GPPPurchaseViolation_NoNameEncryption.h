#pragma once
#include "CoreMinimal.h"
#include "GPPPurchaseViolationButtonData_NoNameEncryption.h"
#include "GPPPurchaseViolationLegacy_NoNameEncryption.h"
#include "GPPPurchaseViolationRadioButtonData_NoNameEncryption.h"
#include "GPPPurchaseViolation_NoNameEncryption.generated.h"

USTRUCT()
struct FGPPPurchaseViolation_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString ID;
    
    UPROPERTY()
    FString Title;
    
    UPROPERTY()
    FString Description;
    
    UPROPERTY()
    bool CanProceed;
    
    UPROPERTY()
    FGPPPurchaseViolationLegacy_NoNameEncryption LegacySupport;
    
    UPROPERTY()
    FString ViewType;
    
    UPROPERTY()
    TArray<FGPPPurchaseViolationButtonData_NoNameEncryption> Buttons;
    
    UPROPERTY()
    TArray<FGPPPurchaseViolationRadioButtonData_NoNameEncryption> RadioButtons;
    
    GPP_API FGPPPurchaseViolation_NoNameEncryption();
};

