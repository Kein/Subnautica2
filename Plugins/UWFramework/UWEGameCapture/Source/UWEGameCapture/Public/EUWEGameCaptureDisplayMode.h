#pragma once
#include "CoreMinimal.h"
#include "EUWEGameCaptureDisplayMode.generated.h"

UENUM(BlueprintType)
enum class EUWEGameCaptureDisplayMode : uint8 {
    ShowAll,
    HideFirstPersonFaceMeshes,
    HideUI,
    HideFirstPersonFaceMeshesAndUI,
    HidePlayerAndUI,
};

