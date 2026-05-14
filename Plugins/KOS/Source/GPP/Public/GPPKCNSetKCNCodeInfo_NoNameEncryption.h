#pragma once
#include "CoreMinimal.h"
#include "GPPKCNSetKCNCodeInfo_NoNameEncryption.generated.h"

USTRUCT()
struct FGPPKCNSetKCNCodeInfo_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Code;
    
    UPROPERTY()
    TArray<FString> Associated_Purchases;
    
    GPP_API FGPPKCNSetKCNCodeInfo_NoNameEncryption();
};

