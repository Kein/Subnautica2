#include "UWEBTDStuckCheck.h"

UUWEBTDStuckCheck::UUWEBTDStuckCheck() {
    this->NodeName = TEXT("Stuck Check");
    this->FlowAbortMode = EBTFlowAbortMode::Self;
    this->Time = 5.00f;
    this->DistanceThreshold = 10.00f;
}


