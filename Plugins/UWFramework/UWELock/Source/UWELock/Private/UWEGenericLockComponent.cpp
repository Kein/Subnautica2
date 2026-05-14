#include "UWEGenericLockComponent.h"

UUWEGenericLockComponent::UUWEGenericLockComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShouldUnlockAutomatically = true;
}

void UUWEGenericLockComponent::PlayLockSound(bool bIsLocked) {
}

void UUWEGenericLockComponent::OnStoryGoalUnlocked(UUWEStoryGoal* StoryGoal, AActor* ReceivingActor) {
}


