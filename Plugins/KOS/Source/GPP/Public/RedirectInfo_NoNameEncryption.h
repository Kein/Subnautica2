#pragma once
#include "CoreMinimal.h"
#include "RedirectInfo_NoNameEncryption.generated.h"

USTRUCT()
struct FRedirectInfo_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString RedirectTo;
    
    GPP_API FRedirectInfo_NoNameEncryption();
};

