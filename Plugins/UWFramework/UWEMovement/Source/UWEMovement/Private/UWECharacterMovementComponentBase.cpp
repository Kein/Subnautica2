#include "UWECharacterMovementComponentBase.h"
#include "Net/UnrealNetwork.h"

UUWECharacterMovementComponentBase::UUWECharacterMovementComponentBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VolumeTracker = NULL;
    this->EnableUWEClientMoveErrorHandling = false;
    this->MAXPOSITIONERRORSQUARED = 10000.00f;
    this->ClientAuthorativePosition = true;
    this->ClientAuthoritativeOnMovementMode = true;
    this->ForceTimeStampSyncWithClientDuration = 1.00f;
    this->PhysicsInteractionMethod = EUWECharacterMovementComponentBasePhysicsInteractionMethod::ApplyForce;
    this->RestrictAmountOfImpactForcesPerTime = true;
    this->ApplyImpactPhysicsForcesMaxInterval = 0.10f;
    this->ShiftImpactPointTowardsMassCenter = false;
    this->ShiftImpactPointTowardsMassCenterVolumeRestriction = 125000.00f;
    this->ShiftAmountOfImpactPointTowardsMassCenter = 0.90f;
}

void UUWECharacterMovementComponentBase::OnTrackedVolumesChanged() {
}

void UUWECharacterMovementComponentBase::OnRep_ReplicatedAcceleration() {
}

FVector UUWECharacterMovementComponentBase::GetAcceleration() const {
    return FVector{};
}

void UUWECharacterMovementComponentBase::ExternalDeltaMove(const FVector& DeltaMotion) {
}

void UUWECharacterMovementComponentBase::EnforceSweepTestOnMove(bool Enforce) {
}

void UUWECharacterMovementComponentBase::AddExternalVelocity(const FVector& InVelocity) {
}

void UUWECharacterMovementComponentBase::AddExternalImpulse(const FVector& Impulse) {
}

void UUWECharacterMovementComponentBase::AddExternalForce(const FVector& Force) {
}

void UUWECharacterMovementComponentBase::AddExternalAcceleration(const FVector& InAcceleration) {
}

void UUWECharacterMovementComponentBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UUWECharacterMovementComponentBase, ReplicatedAcceleration);
}


