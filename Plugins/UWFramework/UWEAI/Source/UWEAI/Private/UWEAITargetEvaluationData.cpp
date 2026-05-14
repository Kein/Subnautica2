#include "UWEAITargetEvaluationData.h"

FUWEAITargetEvaluationData::FUWEAITargetEvaluationData() {
    this->BulkFilter = EUWEAITargetEvaluationBulkFilter::None;
    this->ValueCalculationStrategy = EUWEAITargetEvaluationValueCalculation::ContributeValueDirectly;
    this->InHabitat = false;
    this->HabitatInflationValue = 0.00f;
    this->IncludeTargetRadiusInHabitatCheck = false;
    this->IncludeKnownActors = false;
    this->InTargetViewCone = false;
    this->HalfAngleDegViewCone = 0.00f;
    this->MaxDistanceViewCone = 0.00f;
    this->Weight = 0.00f;
}

