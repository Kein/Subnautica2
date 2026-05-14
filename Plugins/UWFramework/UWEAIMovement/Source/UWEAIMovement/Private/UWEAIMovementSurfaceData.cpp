#include "UWEAIMovementSurfaceData.h"

UUWEAIMovementSurfaceData::UUWEAIMovementSurfaceData() {
    this->SurfaceType = EUWEAIMovementSurfaceType::None;
    this->IsCrawlingSurface = false;
    this->SupportedObjectTypes = 255;
    this->ObstacleAvoidanceWeight = 1.00f;
}


