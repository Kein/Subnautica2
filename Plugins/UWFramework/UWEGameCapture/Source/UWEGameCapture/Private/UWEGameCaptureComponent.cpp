#include "UWEGameCaptureComponent.h"

UUWEGameCaptureComponent::UUWEGameCaptureComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CameraComponent = NULL;
    this->CameraManager = NULL;
}

void UUWEGameCaptureComponent::UpdateCamera(APawn* OldPawn, APawn* NewPawn) {
}

void UUWEGameCaptureComponent::ServerToggleFreeCam_Implementation() {
}


