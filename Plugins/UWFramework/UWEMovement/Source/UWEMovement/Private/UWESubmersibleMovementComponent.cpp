#include "UWESubmersibleMovementComponent.h"

UUWESubmersibleMovementComponent::UUWESubmersibleMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EnableUWEClientMoveErrorHandling = true;
    this->StrafeMaxSpeedModifier = 1.00f;
    this->SwimmingFriction = 0.50f;
    this->WaterGravityMultiplier = 0.00f;
    this->MaxWalkAcceleration = 768.00f;
    this->MaxSwimAcceleration = 2048.00f;
    this->MaxFlyAcceleration = 3000.00f;
}


