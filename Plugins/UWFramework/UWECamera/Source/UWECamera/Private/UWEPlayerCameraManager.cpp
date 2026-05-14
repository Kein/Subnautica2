#include "UWEPlayerCameraManager.h"
#include "Camera/CameraModifier_CameraShake.h"

AUWEPlayerCameraManager::AUWEPlayerCameraManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CachedCameraShakeMod = CreateDefaultSubobject<UCameraModifier_CameraShake>(TEXT("CameraShakeModifier"));
}


