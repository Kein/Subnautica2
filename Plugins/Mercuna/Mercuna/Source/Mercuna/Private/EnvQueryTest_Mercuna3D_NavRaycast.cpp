#include "EnvQueryTest_Mercuna3D_NavRaycast.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UEnvQueryTest_Mercuna3D_NavRaycast::UEnvQueryTest_Mercuna3D_NavRaycast() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->Context = UEnvQueryContext_Querier::StaticClass();
}


