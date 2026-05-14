#include "EnvQueryGenerator_Mercuna_Sphere.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_Point.h"

UEnvQueryGenerator_Mercuna_Sphere::UEnvQueryGenerator_Mercuna_Sphere() {
    this->ItemType = UEnvQueryItemType_Point::StaticClass();
    this->Distribution = EMercunaPointDistribution::Uniform;
    this->Center = UEnvQueryContext_Querier::StaticClass();
}


