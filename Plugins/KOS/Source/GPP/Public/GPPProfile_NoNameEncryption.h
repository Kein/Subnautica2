#pragma once
#include "CoreMinimal.h"
#include "GPPProfile_NoNameEncryption.generated.h"

USTRUCT()
struct FGPPProfile_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Display_Name;
    
    UPROPERTY()
    FString URL;
    
    GPP_API FGPPProfile_NoNameEncryption();
};

