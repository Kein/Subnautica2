#include "UWESurvivalSetComponent.h"
#include "UWESurvivalAttributeSet.h"

UUWESurvivalSetComponent::UUWESurvivalSetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AttributeSetClass = UUWESurvivalAttributeSet::StaticClass();
}

float UUWESurvivalSetComponent::GetWater() const {
    return 0.0f;
}

float UUWESurvivalSetComponent::GetOxygen() const {
    return 0.0f;
}

float UUWESurvivalSetComponent::GetNormalizedWater() const {
    return 0.0f;
}

float UUWESurvivalSetComponent::GetNormalizedOxygen() const {
    return 0.0f;
}

float UUWESurvivalSetComponent::GetNormalizedFood() const {
    return 0.0f;
}

float UUWESurvivalSetComponent::GetNominalDepthMeters() const {
    return 0.0f;
}

float UUWESurvivalSetComponent::GetMaxWater() const {
    return 0.0f;
}

float UUWESurvivalSetComponent::GetMaxOxygen() const {
    return 0.0f;
}

float UUWESurvivalSetComponent::GetMaxFood() const {
    return 0.0f;
}

float UUWESurvivalSetComponent::GetFood() const {
    return 0.0f;
}


