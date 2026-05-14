#pragma once
#include "CoreMinimal.h"
#include "GPPModelsPaging_NoNameEncryption.h"
#include "GPPModelsPaginatedRecordsKey_NoNameEncryption.generated.h"

USTRUCT()
struct GPP_API FGPPModelsPaginatedRecordsKey_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FString> Data;
    
    UPROPERTY(EditAnywhere)
    FGPPModelsPaging_NoNameEncryption Paging;
    
    FGPPModelsPaginatedRecordsKey_NoNameEncryption();
};

