#pragma once
#include "CoreMinimal.h"
#include "LobbyDisconnectByDuplicatedLoggedInNotif_NoNameEncryption.generated.h"

USTRUCT()
struct GPP_API FLobbyDisconnectByDuplicatedLoggedInNotif_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Message;
    
    FLobbyDisconnectByDuplicatedLoggedInNotif_NoNameEncryption();
};

