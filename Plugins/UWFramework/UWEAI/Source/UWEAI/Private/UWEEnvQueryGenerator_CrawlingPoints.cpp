#include "UWEEnvQueryGenerator_CrawlingPoints.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_Point.h"

UUWEEnvQueryGenerator_CrawlingPoints::UUWEEnvQueryGenerator_CrawlingPoints() {
    this->ItemType = UEnvQueryItemType_Point::StaticClass();
    this->StartLocationContext = UEnvQueryContext_Querier::StaticClass();
    this->AIPawnContext = UEnvQueryContext_Querier::StaticClass();
    this->GridCellSizePrecision = 100.00f;
    this->GridCellSize = 200.00f;
    this->DistanceToSurfaceForNoAIPawnContext = 50.00f;
    this->TraceAngleStepForNoAIPawnContext = 30.00f;
}


