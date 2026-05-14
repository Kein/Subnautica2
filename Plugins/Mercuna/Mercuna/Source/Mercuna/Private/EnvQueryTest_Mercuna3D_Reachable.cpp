#include "EnvQueryTest_Mercuna3D_Reachable.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UEnvQueryTest_Mercuna3D_Reachable::UEnvQueryTest_Mercuna3D_Reachable() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->Context = UEnvQueryContext_Querier::StaticClass();
}


