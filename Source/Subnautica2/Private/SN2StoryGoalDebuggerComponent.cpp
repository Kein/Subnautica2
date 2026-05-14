#include "SN2StoryGoalDebuggerComponent.h"

USN2StoryGoalDebuggerComponent::USN2StoryGoalDebuggerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShowStoryGoalsInTreeView = true;
    this->ShowOnlyUnlockedStoryGoals = false;
    this->StoryGoalDebugAction = NULL;
}


