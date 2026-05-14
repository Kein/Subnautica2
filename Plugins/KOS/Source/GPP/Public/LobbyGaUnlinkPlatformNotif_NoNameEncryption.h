#pragma once
#include "CoreMinimal.h"
#include "LobbyGaUnlinkPlatformNotif_NoNameEncryption.generated.h"

USTRUCT()
struct GPP_API FLobbyGaUnlinkPlatformNotif_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString Code;
    
    UPROPERTY(EditAnywhere)
    FString UserId;
    
    FLobbyGaUnlinkPlatformNotif_NoNameEncryption();
};

