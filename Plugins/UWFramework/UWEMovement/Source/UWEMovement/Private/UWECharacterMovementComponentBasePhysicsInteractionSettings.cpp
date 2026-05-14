#include "UWECharacterMovementComponentBasePhysicsInteractionSettings.h"

FUWECharacterMovementComponentBasePhysicsInteractionSettings::FUWECharacterMovementComponentBasePhysicsInteractionSettings() {
    this->InitialPushForceFactor = 0.00f;
    this->PushForceFactor = 0.00f;
    this->PushVelocityMultiplier = 0.00f;
    this->MaxVolumeToApplyPushVelocity = 0.00f;
    this->ScalePushVelocityWithMaxVolume = false;
}

