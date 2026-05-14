#pragma once
#include "CoreMinimal.h"
#include "EGPPStatisticsUpdateStrategy_NoNameEncryption.h"
#include "GPPModelsBulkStatItemUpdate_NoNameEncryption.generated.h"

USTRUCT()
struct GPP_API FGPPModelsBulkStatItemUpdate_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString statCode;
    
    UPROPERTY()
    EGPPStatisticsUpdateStrategy_NoNameEncryption updateStrategy;
    
    UPROPERTY()
    double Value;
    
    FGPPModelsBulkStatItemUpdate_NoNameEncryption();
};

