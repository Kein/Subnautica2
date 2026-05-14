#pragma once
#include "CoreMinimal.h"
#include "GPPModelsUserRecord_NoNameEncryption.h"
#include "ListGPPModelsUserRecord_NoNameEncryption.generated.h"

USTRUCT()
struct GPP_API FListGPPModelsUserRecord_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FGPPModelsUserRecord_NoNameEncryption> Data;
    
    FListGPPModelsUserRecord_NoNameEncryption();
};

