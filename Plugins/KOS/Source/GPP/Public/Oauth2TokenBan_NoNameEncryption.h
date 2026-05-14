#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Oauth2TokenBan_NoNameEncryption.generated.h"

USTRUCT()
struct GPP_API FOauth2TokenBan_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString Ban;
    
    UPROPERTY(EditAnywhere)
    FDateTime EndDate;
    
    FOauth2TokenBan_NoNameEncryption();
};

