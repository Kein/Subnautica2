#include "UWERecipeUnlockRuleEntry.h"

FUWERecipeUnlockRuleEntry::FUWERecipeUnlockRuleEntry() {
    this->EventType = ERecipeEventTypes::OnPickup;
    this->RequirementScope = ERequirementScope::Global;
    this->RequiredCount = 0;
    this->EventAsset = NULL;
}

