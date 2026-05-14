#pragma once
#include "CoreMinimal.h"
#include "GPPPurchaseViolationButtonData_NoNameEncryption.generated.h"

USTRUCT()
struct FGPPPurchaseViolationButtonData_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Title;
    
    UPROPERTY()
    FString Value;
    
    UPROPERTY()
    bool Primary;
    
    UPROPERTY()
    FString Action;
    
    GPP_API FGPPPurchaseViolationButtonData_NoNameEncryption();
};

