#include "UWEDatabankEntry.h"

UUWEDatabankEntry::UUWEDatabankEntry() {
    this->UnlockingRequirements = NULL;
    this->HideOnStoryGoal = NULL;
    this->bCompletesInvestigation = false;
}

bool UUWEDatabankEntry::IsUnlocked() const {
    return false;
}


