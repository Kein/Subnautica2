#include "UWEAutoMoveComponent.h"

UUWEAutoMoveComponent::UUWEAutoMoveComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SplineToFollow = NULL;
    this->UWEAutoMoveGoalDistanceThreshold = 300.00f;
    this->UWEAutoMoveDistanceThreshold = 100.00f;
    this->UWEAutoMoveDistanceBetweenPoints = 300.00f;
}

void UUWEAutoMoveComponent::Stop_Implementation() {
}

void UUWEAutoMoveComponent::Start_Implementation(const FString& Arguments) {
}


