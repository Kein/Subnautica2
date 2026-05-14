#include "UWEAIMovementCrawlingModuleSettings.h"

UUWEAIMovementCrawlingModuleSettings::UUWEAIMovementCrawlingModuleSettings() {
    this->AddOwnerRadiusToDistanceToSurface = true;
    this->DistanceToSurface = 10.00f;
    this->UseCollisionHitForSurfaceDetection = true;
    this->IgnoreCollisionHitWithTheSameSurfaceIndex = true;
    this->SmoothSurfaceNormals = false;
    this->SmoothingNormalsMaxAngle = 0.09f;
    this->SmoothingBufferSize = 16;
    this->SurfaceAlignmentMode = EUWEAIMovementCrawlingModuleSurfaceAlignmentMode::CollisionSurface;
    this->CollisionSurfaceSource = EUWEAIMovementCrawlingModuleCollisionSurfaceSource::Automatic;
}


