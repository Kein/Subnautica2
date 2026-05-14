#include "UWEWorldPopRuleSet.h"

UUWEWorldPopRuleSet::UUWEWorldPopRuleSet() {
    this->DisplayName = FText::FromString(TEXT("Not Set"));
    this->Density = 0.10f;
    this->MaxCount = 0;
    this->PlacementRule = NULL;
}


