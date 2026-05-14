#include "UWEDynamicEventGroup.h"

FUWEDynamicEventGroup::FUWEDynamicEventGroup() {
    this->EventDataAsset = NULL;
    this->Cooldown = 0.00f;
    this->EvaluationInterval = 0.00f;
    this->Active = false;
    this->IsDevelopmentOnly = false;
}

