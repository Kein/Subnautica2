#include "UWEBTDUtilityFactorAttribute.h"

UUWEBTDUtilityFactorAttribute::UUWEBTDUtilityFactorAttribute() {
    this->NodeName = TEXT("Utility Factor Attribute");
    this->UtilityAttribute = UWEAIUtilityFactorAttributeType::Hunger;
    this->UtilityFilter = EUWEAIUtilityFactorEvaluationFilter::None;
    this->UtilityFilterValue = 0.00f;
}


