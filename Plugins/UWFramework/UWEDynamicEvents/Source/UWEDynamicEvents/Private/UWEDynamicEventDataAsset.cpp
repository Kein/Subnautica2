#include "UWEDynamicEventDataAsset.h"

UUWEDynamicEventDataAsset::UUWEDynamicEventDataAsset() {
    this->Active = true;
    this->IsDevelopmentOnly = false;
    this->MaxActivations = 1;
    this->Cooldown = 60.00f;
    this->EvaluationIntervalBase = 1;
    this->EvaluationIntervalDeviation = 0;
    this->OneOff = false;
    this->EventType = NULL;
}


