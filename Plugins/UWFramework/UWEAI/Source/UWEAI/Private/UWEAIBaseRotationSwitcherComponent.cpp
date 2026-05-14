#include "UWEAIBaseRotationSwitcherComponent.h"

UUWEAIBaseRotationSwitcherComponent::UUWEAIBaseRotationSwitcherComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AddReplicatedLooseGameplayTagToAbilitySystem = false;
    this->PauseOnCollisionWithStaticObstacle = true;
    this->StaticObstacleCollisionPauseTime = 1.00f;
    this->MovementComponent = NULL;
}

void UUWEAIBaseRotationSwitcherComponent::SwitchState(const FGameplayTag& StateTag) {
}

void UUWEAIBaseRotationSwitcherComponent::SetDefaultState() {
}

FGameplayTag UUWEAIBaseRotationSwitcherComponent::GetCurrentStateTag() const {
    return FGameplayTag{};
}


