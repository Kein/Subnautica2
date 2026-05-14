#include "UWEBTDUtilityAttributeCondition.h"

UUWEBTDUtilityAttributeCondition::UUWEBTDUtilityAttributeCondition() {
    this->NodeName = TEXT("Utility Attribute Condition");
    this->FlowAbortMode = EBTFlowAbortMode::Self;
    this->UtilityAttribute = UWEAIUtilityFactorAttributeType::Health;
    this->TrackChange = true;
}


