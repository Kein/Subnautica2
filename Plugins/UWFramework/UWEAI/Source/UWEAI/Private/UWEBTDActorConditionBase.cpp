#include "UWEBTDActorConditionBase.h"

UUWEBTDActorConditionBase::UUWEBTDActorConditionBase() {
    this->FlowAbortMode = EBTFlowAbortMode::Self;
    this->ResultIfActorIsNull = false;
    this->CheckVisibility = false;
    this->TrackChange = true;
}


