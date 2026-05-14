#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "JsonObjectWrapper.h"
#include "ESetByMetadataRecord_NoNameEncryption.h"
#include "GPPModelsGameRecord_NoNameEncryption.generated.h"

USTRUCT()
struct GPP_API FGPPModelsGameRecord_NoNameEncryption {
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
    ESetByMetadataRecord_NoNameEncryption SetBy;
    
    UPROPERTY(EditAnywhere)
    FJsonObjectWrapper Value;
    
    FGPPModelsGameRecord_NoNameEncryption();
};

