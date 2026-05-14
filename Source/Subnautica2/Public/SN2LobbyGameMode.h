#pragma once
#include "CoreMinimal.h"
#include "UWELobbyGameMode.h"
#include "SN2LobbyGameMode.generated.h"

UCLASS(NonTransient)
class SUBNAUTICA2_API ASN2LobbyGameMode : public AUWELobbyGameMode {
    GENERATED_BODY()
public:
    ASN2LobbyGameMode(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void ProcessSystemMessageQueue();
    
};

