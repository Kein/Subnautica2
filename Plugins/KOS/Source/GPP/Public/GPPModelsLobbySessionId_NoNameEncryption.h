#pragma once
#include "CoreMinimal.h"
#include "GPPModelsLobbySessionId_NoNameEncryption.generated.h"

USTRUCT()
struct GPP_API FGPPModelsLobbySessionId_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString LobbySessionID;
    
    FGPPModelsLobbySessionId_NoNameEncryption();
};

