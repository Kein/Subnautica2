#include "SN2BuilderGhostPlacementComponent.h"

USN2BuilderGhostPlacementComponent::USN2BuilderGhostPlacementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->UserRotation = 0;
    this->SnapToAlignWithBase = false;
    this->AllowUserRotation = true;
    this->UsingBaseAsReference = false;
    this->ReferenceYaw = 0.00f;
}

bool USN2BuilderGhostPlacementComponent::RemoveActorToIgnore(AActor* Actor) {
    return false;
}

void USN2BuilderGhostPlacementComponent::AddUserRotation(int32 Degrees) {
}

void USN2BuilderGhostPlacementComponent::AddActorToIgnore(AActor* Actor) {
}


