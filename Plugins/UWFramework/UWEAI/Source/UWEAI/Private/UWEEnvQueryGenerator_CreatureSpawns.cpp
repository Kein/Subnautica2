#include "UWEEnvQueryGenerator_CreatureSpawns.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_Point.h"

UUWEEnvQueryGenerator_CreatureSpawns::UUWEEnvQueryGenerator_CreatureSpawns() {
    this->ItemType = UEnvQueryItemType_Point::StaticClass();
    this->CenterContext = UEnvQueryContext_Querier::StaticClass();
    this->OuterRadius = 10000.00f;
    this->InnerRadius = 0.00f;
}


