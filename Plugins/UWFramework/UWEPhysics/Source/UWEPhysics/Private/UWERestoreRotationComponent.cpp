#include "UWERestoreRotationComponent.h"

UUWERestoreRotationComponent::UUWERestoreRotationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OnlyInVolumeType = EVolumeType::EVolumeType_None;
    this->RestorePitch = true;
    this->PitchAngle = 0.00f;
    this->RestoreRoll = true;
    this->RollAngle = 0.00f;
    this->RestoreYaw = false;
    this->YawAngle = 0.00f;
    this->RestoreSpeed = 2.00f;
    this->bDisabledWhileAttached = false;
    this->VolumeTrackerCache = NULL;
}


