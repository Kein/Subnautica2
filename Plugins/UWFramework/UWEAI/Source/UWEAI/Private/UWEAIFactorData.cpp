#include "UWEAIFactorData.h"

FUWEAIFactorData::FUWEAIFactorData() {
    this->CalculationFunction = EUWEAIUtilityFactorCalculationType::Constant;
    this->Constant = 0.00f;
    this->PiecewiseCurve = NULL;
    this->Weight = 0.00f;
}

