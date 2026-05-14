#include "EnvQueryGenerator_Mercuna_2DRandom.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_Point.h"

UEnvQueryGenerator_Mercuna_2DRandom::UEnvQueryGenerator_Mercuna_2DRandom() {
    this->ItemType = UEnvQueryItemType_Point::StaticClass();
    this->Centre = UEnvQueryContext_Querier::StaticClass();
}


