#pragma once
#include "CoreMinimal.h"
#include "GPPEventInfo_NoNameEncryption.generated.h"

USTRUCT()
struct FGPPEventInfo_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString URL;
    
    GPP_API FGPPEventInfo_NoNameEncryption();
};

