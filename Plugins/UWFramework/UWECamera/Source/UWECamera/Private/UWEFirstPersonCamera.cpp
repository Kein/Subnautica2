#include "UWEFirstPersonCamera.h"
#include "Templates/SubclassOf.h"

UUWEFirstPersonCamera::UUWEFirstPersonCamera(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FirstPersonMesh = NULL;
    this->CameraSocketName = TEXT("ik_camera");
    this->bAdjustMeshLocation = true;
    this->bOverrideUseCameraSocketLocation = false;
    this->bOverrideUseCameraSocketRotation = false;
}

void UUWEFirstPersonCamera::StartCinematicRotation(const UObject* Context) {
}

void UUWEFirstPersonCamera::StartCinematicLocation(const UObject* Context) {
}

void UUWEFirstPersonCamera::SetCameraLockTransitionTime(float InTransistionTime) {
}

void UUWEFirstPersonCamera::OnAnimInitialized() {
}

bool UUWEFirstPersonCamera::IsCinematicRotation() const {
    return false;
}

bool UUWEFirstPersonCamera::IsCinematicLocation() const {
    return false;
}

bool UUWEFirstPersonCamera::IsCinematic() const {
    return false;
}

void UUWEFirstPersonCamera::EndCinematicRotation(const UObject* Context) {
}

void UUWEFirstPersonCamera::EndCinematicLocation(const UObject* Context) {
}

void UUWEFirstPersonCamera::AddCameraAnimation(UUWEFirstPersonCamera* Camera, TSubclassOf<UUWECameraAnimation> AnimationClass) {
}


