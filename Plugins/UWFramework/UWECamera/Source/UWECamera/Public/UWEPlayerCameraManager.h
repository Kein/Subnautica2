#pragma once
#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "UWEPlayerCameraManager.generated.h"

UCLASS(NonTransient)
class UWECAMERA_API AUWEPlayerCameraManager : public APlayerCameraManager {
    GENERATED_BODY()
public:
    AUWEPlayerCameraManager(const FObjectInitializer& ObjectInitializer);

};

