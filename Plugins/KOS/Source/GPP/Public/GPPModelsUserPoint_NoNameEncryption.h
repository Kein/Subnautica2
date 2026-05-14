#pragma once
#include "CoreMinimal.h"
#include "GPPModelsUserPoint_NoNameEncryption.generated.h"

USTRUCT()
struct GPP_API FGPPModelsUserPoint_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY()
    double Point;
    
    UPROPERTY()
    FString UserId;
    
    UPROPERTY()
    FString userNickName;
    
    UPROPERTY()
    FString UserTag;
    
    FGPPModelsUserPoint_NoNameEncryption();
};

