#include "UWEAILocomotionComponent.h"

UUWEAILocomotionComponent::UUWEAILocomotionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AIOwner = NULL;
    this->GlobalSettings = NULL;
    this->CurrentVolumeType = EVolumeType::EVolumeType_None;
}

bool UUWEAILocomotionComponent::SwitchHabitationArea(const FGameplayTag& HabitationAreaTag) {
    return false;
}

void UUWEAILocomotionComponent::Shutdown(const FString& Reason) {
}

void UUWEAILocomotionComponent::Restart() {
}

void UUWEAILocomotionComponent::OnCurrentVolumeChanged() {
}

bool UUWEAILocomotionComponent::IsInsideHabitationArea(const FGameplayTag& HabitationAreaTag) {
    return false;
}

bool UUWEAILocomotionComponent::IsInsideCurrentHabitationArea() {
    return false;
}

bool UUWEAILocomotionComponent::HasHabitationArea(const FGameplayTag& HabitationAreaTag) const {
    return false;
}

FRotator UUWEAILocomotionComponent::GetStartRotation() const {
    return FRotator{};
}

FVector UUWEAILocomotionComponent::GetStartLocation() const {
    return FVector{};
}

USplineComponent* UUWEAILocomotionComponent::GetPatrolSplineComponent() {
    return NULL;
}

FGameplayTag UUWEAILocomotionComponent::GetCurrentHabitationAreaTag() const {
    return FGameplayTag{};
}

FUWEHabitationArea UUWEAILocomotionComponent::GetCurrentHabitationArea() const {
    return FUWEHabitationArea{};
}

FVector UUWEAILocomotionComponent::GetClosestPointToHabitationArea(const FGameplayTag& HabitationAreaTag, const FVector& Location) {
    return FVector{};
}

FVector UUWEAILocomotionComponent::GetClosestPointToCurrentHabitationArea(const FVector& Location) {
    return FVector{};
}

FVector UUWEAILocomotionComponent::GetClosestCenterOfHabitationArea(const FGameplayTag& HabitationAreaTag, const FVector& Location) {
    return FVector{};
}

FVector UUWEAILocomotionComponent::GetClosestCenterOfCurrentHabitationArea(const FVector& Location) {
    return FVector{};
}


