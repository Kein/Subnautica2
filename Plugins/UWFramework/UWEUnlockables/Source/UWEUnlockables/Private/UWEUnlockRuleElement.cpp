#include "UWEUnlockRuleElement.h"

FUWEUnlockRuleElement::FUWEUnlockRuleElement() {
    this->RequirementScope = ERequirementScope::Global;
    this->RequiredCount = 0;
    this->EventAsset = NULL;
}

