#pragma once
#include "CoreMinimal.h"
#include "GPPModelsBulkStatItemOperationResult_NoNameEncryption.generated.h"

USTRUCT()
struct GPP_API FGPPModelsBulkStatItemOperationResult_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<FString, FString> Details;
    
    UPROPERTY(EditAnywhere)
    FString statCode;
    
    UPROPERTY(EditAnywhere)
    bool Success;
    
    FGPPModelsBulkStatItemOperationResult_NoNameEncryption();
};

