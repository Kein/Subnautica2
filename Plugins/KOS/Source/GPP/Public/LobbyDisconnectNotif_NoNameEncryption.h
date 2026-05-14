#pragma once
#include "CoreMinimal.h"
#include "LobbyDisconnectNotif_NoNameEncryption.generated.h"

USTRUCT()
struct GPP_API FLobbyDisconnectNotif_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Message;
    
    FLobbyDisconnectNotif_NoNameEncryption();
};

