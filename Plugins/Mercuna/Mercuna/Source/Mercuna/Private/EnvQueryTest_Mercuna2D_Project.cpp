#include "EnvQueryTest_Mercuna2D_Project.h"

UEnvQueryTest_Mercuna2D_Project::UEnvQueryTest_Mercuna2D_Project() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->AgentClass = NULL;
    this->ProjectionType = EMercunaProjectionType::UpOrDown;
}


