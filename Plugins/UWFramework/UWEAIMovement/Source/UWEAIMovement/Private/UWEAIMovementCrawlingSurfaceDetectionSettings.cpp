#include "UWEAIMovementCrawlingSurfaceDetectionSettings.h"

FUWEAIMovementCrawlingSurfaceDetectionSettings::FUWEAIMovementCrawlingSurfaceDetectionSettings() {
    this->ObjectType = EUWEAIMovementObjectType::None;
    this->LineTraceLengthMultiplier = 0.00f;
    this->TraceComplexCollision = false;
    this->MaxSurfaceTraceIterations = 0;
    this->CheckAllBlockingHits = false;
}

