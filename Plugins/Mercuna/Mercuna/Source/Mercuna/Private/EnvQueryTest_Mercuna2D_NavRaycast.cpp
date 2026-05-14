#include "EnvQueryTest_Mercuna2D_NavRaycast.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UEnvQueryTest_Mercuna2D_NavRaycast::UEnvQueryTest_Mercuna2D_NavRaycast() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->AgentClass = NULL;
    this->Context = UEnvQueryContext_Querier::StaticClass();
}


