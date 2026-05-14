#include "UWECharacterMovementComponent.h"

UUWECharacterMovementComponent::UUWECharacterMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bRunPhysicsWithNoController = true;
    this->MaxWalkAcceleration = 2048.00f;
    this->MaxSwimAcceleration = 1024.00f;
    this->MaxFlyAcceleration = 3000.00f;
    this->HeightChangeTransitionTime = 0.50f;
    this->BuoyancyForce = 850.00f;
    this->SurfaceUpwardsFriction = 40.00f;
    this->PushImpactedObjectAlongFloor = true;
    this->EnableStuckDetection = false;
    this->UnstuckLocationHistoryCount = 4;
    this->DistanceBetweenUnstuckLocations = 100.00f;
    this->CapsuleComponent = NULL;
}

float UUWECharacterMovementComponent::GetDistanceToWaterline() const {
    return 0.0f;
}

float UUWECharacterMovementComponent::GetDepth() const {
    return 0.0f;
}


