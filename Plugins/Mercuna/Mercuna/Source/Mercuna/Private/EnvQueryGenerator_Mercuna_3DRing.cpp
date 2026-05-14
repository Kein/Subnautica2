#include "EnvQueryGenerator_Mercuna_3DRing.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_Point.h"

UEnvQueryGenerator_Mercuna_3DRing::UEnvQueryGenerator_Mercuna_3DRing() {
    this->ItemType = UEnvQueryItemType_Point::StaticClass();
    this->Center = UEnvQueryContext_Querier::StaticClass();
}


