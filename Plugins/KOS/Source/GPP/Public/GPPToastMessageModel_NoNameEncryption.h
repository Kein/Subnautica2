#pragma once
#include "CoreMinimal.h"
#include "GPPToastMessageModel_NoNameEncryption.generated.h"

USTRUCT()
struct GPP_API FGPPToastMessageModel_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Title;
    
    UPROPERTY()
    FString Message;
    
    UPROPERTY()
    int32 DisplayDurationMillis;
    
    UPROPERTY()
    FString DisplayPosition;
    
    FGPPToastMessageModel_NoNameEncryption();
};

