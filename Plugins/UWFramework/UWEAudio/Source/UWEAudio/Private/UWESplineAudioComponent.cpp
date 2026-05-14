#include "UWESplineAudioComponent.h"

UUWESplineAudioComponent::UUWESplineAudioComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InterpolationSpeed = 4.00f;
    this->AudioComponent = NULL;
    this->SplineComponent = NULL;
    this->CameraManager = NULL;
}


