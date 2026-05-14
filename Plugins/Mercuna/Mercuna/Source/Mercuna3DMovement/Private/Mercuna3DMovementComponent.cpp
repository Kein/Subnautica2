#include "Mercuna3DMovementComponent.h"

UMercuna3DMovementComponent::UMercuna3DMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bPositionCorrected = false;
}

void UMercuna3DMovementComponent::SetVelocity(FVector NewVelocity) {
}

void UMercuna3DMovementComponent::SetVelocitiesFromPhysics() {
}

void UMercuna3DMovementComponent::SetMovementProperties(const FMercuna3DMovementProperties& NewMovementProperties) {
}

void UMercuna3DMovementComponent::SetAngularVelocity(FVector NewAngVel) {
}

FMercuna3DMovementProperties UMercuna3DMovementComponent::GetMovementProperties() const {
    return FMercuna3DMovementProperties{};
}

FVector UMercuna3DMovementComponent::GetLocalVelocity() const {
    return FVector{};
}

FRotator UMercuna3DMovementComponent::GetLocalRotationRate() const {
    return FRotator{};
}

void UMercuna3DMovementComponent::AddImpulse(FVector Impulse) {
}


