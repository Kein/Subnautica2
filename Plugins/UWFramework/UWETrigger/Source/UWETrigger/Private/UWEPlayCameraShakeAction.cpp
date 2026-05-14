#include "UWEPlayCameraShakeAction.h"

UUWEPlayCameraShakeAction::UUWEPlayCameraShakeAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InnerAttenuationRadius = 100.00f;
    this->OuterAttenuationRadius = 1000.00f;
}


