#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GPPModelsStatItemValue_NoNameEncryption.generated.h"

USTRUCT()
struct GPP_API FGPPModelsStatItemValue_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY()
    FDateTime CreatedAt;
    
    UPROPERTY()
    FDateTime UpdatedAt;
    
    UPROPERTY()
    FString statCode;
    
    UPROPERTY()
    FString StatName;
    
    UPROPERTY()
    double Value;
    
    UPROPERTY()
    TArray<FString> Tags;
    
    FGPPModelsStatItemValue_NoNameEncryption();
};

