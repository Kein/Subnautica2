#include "EnvQueryTest_Mercuna2D_Reachable.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UEnvQueryTest_Mercuna2D_Reachable::UEnvQueryTest_Mercuna2D_Reachable() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->AgentClass = NULL;
    this->Context = UEnvQueryContext_Querier::StaticClass();
}


