#include "UWEBTDGrouping.h"

UUWEBTDGrouping::UUWEBTDGrouping() {
    this->NodeName = TEXT("Grouping Check");
    this->FlowAbortMode = EBTFlowAbortMode::Self;
    this->GroupingCheckType = UWEAIGroupingCheckType::IsLeader;
}


