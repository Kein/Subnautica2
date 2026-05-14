#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "JsonObjectWrapper.h"
#include "GPPModelsGameConfig_NoNameEncryption.generated.h"

USTRUCT()
struct GPP_API FGPPModelsGameConfig_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString Key;
    
    UPROPERTY(EditAnywhere)
    FString Namespace;
    
    UPROPERTY(EditAnywhere)
    FDateTime CreatedAt;
    
    UPROPERTY(EditAnywhere)
    FDateTime UpdatedAt;
    
    UPROPERTY(EditAnywhere)
    FJsonObjectWrapper Value;
    
    FGPPModelsGameConfig_NoNameEncryption();
};

