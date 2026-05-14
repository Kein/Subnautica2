#include "EnvQueryTest_Mercuna2D_Navigable.h"

UEnvQueryTest_Mercuna2D_Navigable::UEnvQueryTest_Mercuna2D_Navigable() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->AgentClass = NULL;
}


