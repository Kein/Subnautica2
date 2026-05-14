#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "UWELobbyGameState.generated.h"

UCLASS()
class UWELOBBY_API AUWELobbyGameState : public AGameStateBase {
    GENERATED_BODY()
public:
    AUWELobbyGameState(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NotifyEnteringGame();
    
};

