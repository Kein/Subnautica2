#include "EnvQueryGenerator_Mercuna_2DNavGrid.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_Point.h"

UEnvQueryGenerator_Mercuna_2DNavGrid::UEnvQueryGenerator_Mercuna_2DNavGrid() {
    this->ItemType = UEnvQueryItemType_Point::StaticClass();
    this->Centre = UEnvQueryContext_Querier::StaticClass();
}


