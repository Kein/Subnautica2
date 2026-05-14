#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GPPKCNGetKCNCodeInfo_NoNameEncryption.generated.h"

USTRUCT()
struct FGPPKCNGetKCNCodeInfo_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Code;
    
    UPROPERTY()
    FDateTime Expire_at;
    
    UPROPERTY()
    TArray<FString> Associated_Purchases;
    
    GPP_API FGPPKCNGetKCNCodeInfo_NoNameEncryption();
};

