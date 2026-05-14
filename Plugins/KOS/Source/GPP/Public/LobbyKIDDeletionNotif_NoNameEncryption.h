#pragma once
#include "CoreMinimal.h"
#include "LobbyKIDDeletionNotif_NoNameEncryption.generated.h"

USTRUCT()
struct GPP_API FLobbyKIDDeletionNotif_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Code;
    
    UPROPERTY()
    FString UserId;
    
    FLobbyKIDDeletionNotif_NoNameEncryption();
};

