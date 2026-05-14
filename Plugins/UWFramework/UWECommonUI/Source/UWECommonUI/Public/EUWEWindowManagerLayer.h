#pragma once
#include "CoreMinimal.h"
#include "EUWEWindowManagerLayer.generated.h"

UENUM(BlueprintType)
enum EUWEWindowManagerLayer {
    Bottom,
    HUD,
    AboveHUD,
    Modal,
    AboveModal,
    PauseScreen,
    AbovePauseScreen,
    Debug,
    TopLayer = Debug,
};

