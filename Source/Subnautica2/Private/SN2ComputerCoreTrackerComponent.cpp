#include "SN2ComputerCoreTrackerComponent.h"

USN2ComputerCoreTrackerComponent::USN2ComputerCoreTrackerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TrackedGoalData = NULL;
}

void USN2ComputerCoreTrackerComponent::OnStoryGoalUnlocked(UUWEStoryGoal* UnlockedStoryGoal, AActor* Target) {
}

void USN2ComputerCoreTrackerComponent::OnStoryGoalReady(UUWEStoryGoal* Goal) {
}

FTimerHandle USN2ComputerCoreTrackerComponent::GetStoryGoalTimerHandle(UUWEStoryGoal* StoryGoal) {
    return FTimerHandle{};
}


