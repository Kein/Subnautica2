#include "UWEChaosPhysicsController.h"

UUWEChaosPhysicsController::UUWEChaosPhysicsController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PhysicsComponent = NULL;
    this->VolumeTrackerComponent = NULL;
    this->BuoyancyMode = EUWEChaosPhysicsControllerBuoyancyMode::PhysicsFormula;
    this->VolumeMultiplier = 0.50f;
    this->SetMassOutOfBuoyancyForce = false;
    this->SetMassOutOfBuoyancyForceGravityMultiplier = 1.00f;
    this->WeldedBodiesDoNotAffectRequiredBuoyancy = true;
    this->BespokeBuoyancyAcceleration = 980.00f;
}

void UUWEChaosPhysicsController::SetPhysicsEnabled(bool Enabled) {
}

void UUWEChaosPhysicsController::SetEnvironmentSettings(const FUWEChaosPhysicsControllerEnvironmentSettings& EnvironmentSetting) {
}

void UUWEChaosPhysicsController::OnVolumeTypeChanged(EVolumeType VolumeType) {
}

FVector UUWEChaosPhysicsController::GetBodySize() const {
    return FVector{};
}

FBox UUWEChaosPhysicsController::GetBodyBounds() const {
    return FBox{};
}

void UUWEChaosPhysicsController::ForceToSleep() {
}

void UUWEChaosPhysicsController::AddVelocity(const FVector& Velocity) {
}

void UUWEChaosPhysicsController::AddImpulseAtPosition(const FVector& Impulse, const FVector& position) {
}

void UUWEChaosPhysicsController::AddImpulse(const FVector& Impulse) {
}

void UUWEChaosPhysicsController::AddForceAtPosition(const FVector& Force, const FVector& position) {
}

void UUWEChaosPhysicsController::AddForce(const FVector& Force) {
}

void UUWEChaosPhysicsController::AddAcceleration(const FVector& Acceleration) {
}


