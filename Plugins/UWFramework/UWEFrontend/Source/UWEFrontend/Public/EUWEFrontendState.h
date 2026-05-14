#pragma once
#include "CoreMinimal.h"
#include "EUWEFrontendState.generated.h"

UENUM(BlueprintType)
enum class EUWEFrontendState : uint8 {
    InitialBootFlow,
    PressStartScreen,
    MainMenu,
    MultiplayerMenu,
};

