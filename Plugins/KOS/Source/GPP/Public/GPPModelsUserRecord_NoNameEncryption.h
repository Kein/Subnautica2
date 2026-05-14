#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "JsonObjectWrapper.h"
#include "ESetByMetadataRecord_NoNameEncryption.h"
#include "GPPModelsUserRecord_NoNameEncryption.generated.h"

USTRUCT()
struct GPP_API FGPPModelsUserRecord_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString Key;
    
    UPROPERTY(EditAnywhere)
    FString Namespace;
    
    UPROPERTY(EditAnywhere)
    FString UserId;
    
    UPROPERTY(EditAnywhere)
    bool IsPublic;
    
    UPROPERTY(EditAnywhere)
    FDateTime CreatedAt;
    
    UPROPERTY(EditAnywhere)
    FDateTime UpdatedAt;
    
    UPROPERTY(EditAnywhere)
    ESetByMetadataRecord_NoNameEncryption SetBy;
    
    UPROPERTY(EditAnywhere)
    FJsonObjectWrapper Value;
    
    FGPPModelsUserRecord_NoNameEncryption();
};

