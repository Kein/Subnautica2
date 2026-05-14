#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "UWELobbyPlayerController.generated.h"

UCLASS()
class UWELOBBY_API AUWELobbyPlayerController : public APlayerController {
    GENERATED_BODY()
public:
    AUWELobbyPlayerController(const FObjectInitializer& ObjectInitializer);

};

