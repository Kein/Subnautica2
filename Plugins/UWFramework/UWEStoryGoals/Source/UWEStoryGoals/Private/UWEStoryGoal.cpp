#include "UWEStoryGoal.h"

UUWEStoryGoal::UUWEStoryGoal() {
    this->StoryGoalType = EStoryGoalTargetType::Player;
    this->UnlockingRequirements = NULL;
    this->UnlockOnRequirementsMet = false;
    this->TriggeredDialogue = NULL;
    this->TriggeredNotification = NULL;
    this->TriggeredTagStoryEvent = NULL;
}

bool UUWEStoryGoal::IsUnlockingRequirementsSatisfied(AActor* Actor) const {
    return false;
}


