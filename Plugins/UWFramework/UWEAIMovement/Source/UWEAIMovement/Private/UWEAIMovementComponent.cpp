#include "UWEAIMovementComponent.h"
#include "Net/UnrealNetwork.h"

UUWEAIMovementComponent::UUWEAIMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SwimmingModule = NULL;
    this->CrawlingModule = NULL;
    this->StaticObstacleAvoidanceModule = NULL;
    this->OscillatoryMotionModule = NULL;
    this->SpiralHeightChangeModule = NULL;
    this->CircularMotionModule = NULL;
    this->SpeedAlterationModule = NULL;
    this->GroupingModule = NULL;
    this->GlobalSettings = NULL;
    this->BaseSettings = NULL;
    this->Settings = NULL;
    this->AutoSetSettings = false;
    this->CoreModule = NULL;
    this->DragProportion = 1.00f;
    this->SkeletalMesh = NULL;
    this->AnimRootMotionTranslationScale = 1.00f;
}

void UUWEAIMovementComponent::UpdateActorSizeData() {
}

void UUWEAIMovementComponent::StartMoveToLocation(const FVector& TargetLocation, float MoveToForceProportion, float ApproachDistance, const FUWEAIMovementStoppingConfig& InStoppingConfig) {
}

void UUWEAIMovementComponent::SetMoveToForceProportion(float InForceProportion) {
}

void UUWEAIMovementComponent::SetDesiredSteeringDirection(const FVector& SteeringDirection) {
}

void UUWEAIMovementComponent::SetDesiredLookDirection(const FVector& InLookDirection) {
}

void UUWEAIMovementComponent::SetBaseRotation(const FRotator& Rotation) {
}

void UUWEAIMovementComponent::ResetLookAtLocation() {
}

void UUWEAIMovementComponent::OnRep_Settings() {
}

void UUWEAIMovementComponent::MoveToLocation(const FVector& TargetLocation, float ApproachDistance) {
}

void UUWEAIMovementComponent::MoveInDesiredSteeringDirection(const FVector& SteeringDirection) {
}

void UUWEAIMovementComponent::LookAtLocation(const FVector& Location) {
}

bool UUWEAIMovementComponent::IsSwimmingActive() {
    return false;
}

bool UUWEAIMovementComponent::IsMovementValid() const {
    return false;
}

bool UUWEAIMovementComponent::IsCrawlingActive() {
    return false;
}

FVector UUWEAIMovementComponent::GetVelocityInLocalSpace() {
    return FVector{};
}

float UUWEAIMovementComponent::GetTerminalVelocityMagnitudeWithForceProportion(float InForceProportion) const {
    return 0.0f;
}

float UUWEAIMovementComponent::GetTerminalVelocityMagnitude() {
    return 0.0f;
}

FVector UUWEAIMovementComponent::GetSteeringAccelerationInLocalSpace() {
    return FVector{};
}

FVector UUWEAIMovementComponent::GetSmoothedRelativeAngularVelocity() {
    return FVector{};
}

FVector UUWEAIMovementComponent::GetRelativeVelocityInLocalSpace() {
    return FVector{};
}

FVector UUWEAIMovementComponent::GetRelativeVelocity() {
    return FVector{};
}

FVector UUWEAIMovementComponent::GetRelativeAngularVelocity() {
    return FVector{};
}

FGameplayTag UUWEAIMovementComponent::GetEnvironmentType() {
    return FGameplayTag{};
}

FRotator UUWEAIMovementComponent::GetBaseRotation() const {
    return FRotator{};
}

FVector UUWEAIMovementComponent::GetAnimationVelocityRelativeToOverallMaxInLocalSpace() {
    return FVector{};
}

FVector UUWEAIMovementComponent::GetAnimationVelocityRelativeToOverallMax() {
    return FVector{};
}

FVector UUWEAIMovementComponent::GetAnimationVelocityRelativeToCurrentMaxInLocalSpace() {
    return FVector{};
}

FVector UUWEAIMovementComponent::GetAnimationVelocityRelativeToCurrentMax() {
    return FVector{};
}

FVector UUWEAIMovementComponent::GetAnimationVelocityInLocalSpace() {
    return FVector{};
}

FVector UUWEAIMovementComponent::GetAnimationVelocity(EUWEAIMovementVectorSpace VectorSpace, EUWEAIMovementVectorRelativeMode RelativeMode) {
    return FVector{};
}

FVector UUWEAIMovementComponent::GetAnimationSteeringAccelerationInLocalSpace() {
    return FVector{};
}

FVector UUWEAIMovementComponent::GetAnimationSteeringAcceleration(EUWEAIMovementVectorSpace VectorSpace, EUWEAIMovementVectorRelativeMode RelativeMode) {
    return FVector{};
}

float UUWEAIMovementComponent::GetAnimationOverallMaxSteeringAcceleration() const {
    return 0.0f;
}

float UUWEAIMovementComponent::GetAnimationOverallMaxSpeed() const {
    return 0.0f;
}

float UUWEAIMovementComponent::GetAnimationCurrentMaxSteeringAcceleration() const {
    return 0.0f;
}

float UUWEAIMovementComponent::GetAnimationCurrentMaxSpeed() const {
    return 0.0f;
}

FQuat UUWEAIMovementComponent::GetAngularVelocityAsQuaternion() {
    return FQuat{};
}

void UUWEAIMovementComponent::FinishMoveToLocation(const FVector& TargetLocation, float MoveToForceProportion, float ApproachDistance) {
}

void UUWEAIMovementComponent::ExternalDeltaMove(const FVector& DeltaMotion) {
}

void UUWEAIMovementComponent::EnforceSweepTestOnMove(bool Enforce) {
}

void UUWEAIMovementComponent::EditorOnly_Set2DMode(bool In2DMode) {
}

bool UUWEAIMovementComponent::CanSwim() {
    return false;
}

bool UUWEAIMovementComponent::CanCrawl() {
    return false;
}

void UUWEAIMovementComponent::AddExternalVelocity(const FVector& InVelocity) {
}

void UUWEAIMovementComponent::AddExternalImpulse(const FVector& Impulse) {
}

void UUWEAIMovementComponent::AddExternalForce(const FVector& Force) {
}

void UUWEAIMovementComponent::AddExternalAcceleration(const FVector& Acceleration) {
}

void UUWEAIMovementComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UUWEAIMovementComponent, Settings);
    DOREPLIFETIME(UUWEAIMovementComponent, RawSteeringAcceleration);
    DOREPLIFETIME(UUWEAIMovementComponent, RawAngularVelocity);
}


