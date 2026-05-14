#pragma once
#include "CoreMinimal.h"
#include "GPPModelsXBoxDLCSync_NoNameEncryption.generated.h"

USTRUCT()
struct GPP_API FGPPModelsXBoxDLCSync_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString XstsToken;
    
    FGPPModelsXBoxDLCSync_NoNameEncryption();
};

