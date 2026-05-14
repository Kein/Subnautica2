#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "JsonObjectWrapper.h"
#include "GPPModelsConcurrentReplaceRequest_NoNameEncryption.generated.h"

USTRUCT()
struct GPP_API FGPPModelsConcurrentReplaceRequest_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FDateTime UpdatedAt;
    
    UPROPERTY(EditAnywhere)
    FJsonObjectWrapper Value;
    
    FGPPModelsConcurrentReplaceRequest_NoNameEncryption();
};

