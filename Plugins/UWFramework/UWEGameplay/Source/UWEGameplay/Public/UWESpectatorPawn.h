#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SpectatorPawn.h"
#include "UWESpectatorPawn.generated.h"

UCLASS()
class UWEGAMEPLAY_API AUWESpectatorPawn : public ASpectatorPawn {
    GENERATED_BODY()
public:
    AUWESpectatorPawn(const FObjectInitializer& ObjectInitializer);

};

