#pragma once
#include "CoreMinimal.h"
#include "Oauth2TokenPermission_NoNameEncryption.generated.h"

USTRUCT()
struct GPP_API FOauth2TokenPermission_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString Resource;
    
    UPROPERTY(EditAnywhere)
    int32 Action;
    
    FOauth2TokenPermission_NoNameEncryption();
};

