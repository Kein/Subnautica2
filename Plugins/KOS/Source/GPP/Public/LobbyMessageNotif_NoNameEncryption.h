#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LobbyMessageNotif_NoNameEncryption.generated.h"

USTRUCT()
struct GPP_API FLobbyMessageNotif_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Code;
    
    UPROPERTY()
    FString CodeName;
    
    UPROPERTY()
    FString ID;
    
    UPROPERTY()
    FString From;
    
    UPROPERTY()
    FString To;
    
    UPROPERTY()
    FString Topic;
    
    UPROPERTY()
    FString Payload;
    
    UPROPERTY()
    FDateTime SentAt;
    
    FLobbyMessageNotif_NoNameEncryption();
};

