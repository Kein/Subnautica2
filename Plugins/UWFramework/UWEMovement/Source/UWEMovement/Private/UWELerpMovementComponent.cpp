#include "UWELerpMovementComponent.h"

UUWELerpMovementComponent::UUWELerpMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->UpdateComponentVelocity = true;
    this->AuthorityOnly = true;
    this->State = EUWELerpMovementState::Empty;
    this->TimePassed = 0.00f;
    this->CurrentLoopsCount = 1;
}

void UUWELerpMovementComponent::SetLerpData(TArray<FUWELerpMovementPoint> Points, const FUWELerpMovementExecutionSettings& InExecutionSettings) {
}

void UUWELerpMovementComponent::ResetLerpData() {
}

void UUWELerpMovementComponent::LerpToTransform(const FTransform& StopTransform, const FUWELerpMovementExecutionSettings& InExecutionSettings, bool StartImmediately) {
}

void UUWELerpMovementComponent::LerpToRotation(const FRotator& StopRotation, const FUWELerpMovementExecutionSettings& InExecutionSettings, bool StartImmediately) {
}

void UUWELerpMovementComponent::LerpToLocationAndRotation(const FVector& StopLocation, const FRotator& StopRotation, const FUWELerpMovementExecutionSettings& InExecutionSettings, bool StartImmediately) {
}

void UUWELerpMovementComponent::LerpToLocation(const FVector& StopLocation, const FUWELerpMovementExecutionSettings& InExecutionSettings, bool StartImmediately) {
}

void UUWELerpMovementComponent::LerpStop(bool Reset) {
}

void UUWELerpMovementComponent::LerpStart() {
}

void UUWELerpMovementComponent::LerpBetweenTransforms(const FTransform& StartTransform, const FTransform& StopTransform, const FUWELerpMovementExecutionSettings& InExecutionSettings, bool StartImmediately) {
}

void UUWELerpMovementComponent::LerpBetweenRotations(const FRotator& StartRotation, const FRotator& StopRotation, const FUWELerpMovementExecutionSettings& InExecutionSettings, bool StartImmediately) {
}

void UUWELerpMovementComponent::LerpBetweenLocationsAndRotations(const FVector& StartLocation, const FRotator& StartRotation, const FVector& StopLocation, const FRotator& StopRotation, const FUWELerpMovementExecutionSettings& InExecutionSettings, bool StartImmediately) {
}

void UUWELerpMovementComponent::LerpBetweenLocations(const FVector& StartLocation, const FVector& StopLocation, const FUWELerpMovementExecutionSettings& InExecutionSettings, bool StartImmediately) {
}


