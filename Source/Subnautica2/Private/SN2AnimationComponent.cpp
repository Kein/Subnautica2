#include "SN2AnimationComponent.h"

USN2AnimationComponent::USN2AnimationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AnimSyncSkeletalMeshDriver = NULL;
    this->bAnimSyncEnabled = false;
    this->AnimSyncDrivenBlendInTime = 0.00f;
    this->AnimSyncDrivenBlendOutTime = 0.00f;
}


USkeletalMeshComponent* USN2AnimationComponent::GetTargetSKMComponent_Implementation() const {
    return NULL;
}

UAnimInstance* USN2AnimationComponent::GetAnimInstance_Implementation() const {
    return NULL;
}


