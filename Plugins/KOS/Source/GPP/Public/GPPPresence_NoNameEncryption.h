#pragma once
#include "CoreMinimal.h"
#include "EGPPUserStatus_NoNameEncryption.h"
#include "GPPPresence_NoNameEncryption.generated.h"

USTRUCT()
struct FGPPPresence_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY()
    int64 LastLoginAt;
    
    UPROPERTY()
    EGPPUserStatus_NoNameEncryption Status;
    
    UPROPERTY()
    FString PlayingGameTile;
    
    UPROPERTY()
    FString StatusDisplayString;
    
    GPP_API FGPPPresence_NoNameEncryption();
};

