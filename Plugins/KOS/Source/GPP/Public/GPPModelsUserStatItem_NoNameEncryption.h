#pragma once
#include "CoreMinimal.h"
#include "GPPModelsStatItemValue_NoNameEncryption.h"
#include "GPPModelsUserStatItem_NoNameEncryption.generated.h"

USTRUCT()
struct GPP_API FGPPModelsUserStatItem_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString UserId;
    
    UPROPERTY()
    FString Namespace;
    
    UPROPERTY()
    TArray<FGPPModelsStatItemValue_NoNameEncryption> statItemValues;
    
    FGPPModelsUserStatItem_NoNameEncryption();
};

