#include "UWEBoundsTopAudioComponent.h"

UUWEBoundsTopAudioComponent::UUWEBoundsTopAudioComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClampActorBoundsZToZero = false;
    this->AudioComponent = NULL;
    this->CameraManager = NULL;
}


