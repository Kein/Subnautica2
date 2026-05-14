#include "UWESubmarineMovementComponent.h"
#include "Net/UnrealNetwork.h"

UUWESubmarineMovementComponent::UUWESubmarineMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxSpeed = 0.00f;
    this->MaxAngularSpeed = 30.00f;
    this->RotationSpeedMultiplier = 1.00f;
    this->VolumeTracker = NULL;
    this->Mass = 10000.00f;
    this->bIsCloseToGround = false;
    this->bCollisionImminent = false;
    this->bAutoSpeedEnabled = false;
    this->ForwardAcceleration = 400.00f;
    this->VerticalAcceleration = 130.00f;
    this->StrafeAcceleration = 90.00f;
    this->Drag = 0.40f;
    this->AngularAcceleration = 55.00f;
    this->AngularDrag = 2.50f;
    this->MaxRoll = 5.00f;
    this->MaxPitch = 5.00f;
    this->bSinking = false;
    this->bRollPitchCorrectionEnabled = true;
}

bool UUWESubmarineMovementComponent::ToggleRandomAutoPilot() {
    return false;
}

void UUWESubmarineMovementComponent::ToggleAutoSpeed() {
}

void UUWESubmarineMovementComponent::StopMovement() {
}

bool UUWESubmarineMovementComponent::IsSteering() const {
    return false;
}

FVector UUWESubmarineMovementComponent::GetPredictedHitLocation() {
    return FVector{};
}

void UUWESubmarineMovementComponent::ExternalDeltaMove(const FVector& DeltaMotion) {
}

void UUWESubmarineMovementComponent::DoRandomInput() {
}

void UUWESubmarineMovementComponent::AddInput(FVector Direction, FVector Rotation) {
}

void UUWESubmarineMovementComponent::AddExternalVelocity(const FVector& InVelocity) {
}

void UUWESubmarineMovementComponent::AddExternalImpulse(const FVector& Impulse) {
}

void UUWESubmarineMovementComponent::AddExternalForce(const FVector& Force) {
}

void UUWESubmarineMovementComponent::AddExternalAcceleration(const FVector& Acceleration) {
}

void UUWESubmarineMovementComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UUWESubmarineMovementComponent, AngularVelocity);
    DOREPLIFETIME(UUWESubmarineMovementComponent, MaxSpeed);
    DOREPLIFETIME(UUWESubmarineMovementComponent, MaxAngularSpeed);
    DOREPLIFETIME(UUWESubmarineMovementComponent, RotationSpeedMultiplier);
    DOREPLIFETIME(UUWESubmarineMovementComponent, ReplicatedVelocity);
    DOREPLIFETIME(UUWESubmarineMovementComponent, bAutoSpeedEnabled);
}


