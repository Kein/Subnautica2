#include "UWEAbilityCondition_AttributeRequirement.h"

UUWEAbilityCondition_AttributeRequirement::UUWEAbilityCondition_AttributeRequirement() {
    this->bOverrideMaxAttribute = false;
    this->OverrideMaxAttributeValue = 100.00f;
    this->ComparisonMethod = EUWEAttributeComparisonMethod::BelowMaximum;
    this->MinPercentage = 0.00f;
    this->MaxPercentage = 100.00f;
}


