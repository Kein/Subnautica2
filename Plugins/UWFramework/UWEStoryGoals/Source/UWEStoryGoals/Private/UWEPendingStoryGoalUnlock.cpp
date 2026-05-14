#include "UWEPendingStoryGoalUnlock.h"

FUWEPendingStoryGoalUnlock::FUWEPendingStoryGoalUnlock() {
    this->PlayerId = 0;
    this->TimeRemaining = 0.00f;
    this->IgnorePrerequisites = false;
    this->OriginalDelay = 0.00f;
}

