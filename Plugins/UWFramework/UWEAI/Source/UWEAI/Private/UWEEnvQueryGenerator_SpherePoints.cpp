#include "UWEEnvQueryGenerator_SpherePoints.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_Point.h"

UUWEEnvQueryGenerator_SpherePoints::UUWEEnvQueryGenerator_SpherePoints() {
    this->ItemType = UEnvQueryItemType_Point::StaticClass();
    this->CenterContext = UEnvQueryContext_Querier::StaticClass();
    this->SphereRadius = 2500.00f;
    this->SphereInnerRadius = 0.00f;
}


