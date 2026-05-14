#include "UWEAIMovementStaticObstacleAvoidanceModuleProfile.h"

UUWEAIMovementStaticObstacleAvoidanceModuleProfile::UUWEAIMovementStaticObstacleAvoidanceModuleProfile() {
    this->bAutoSetAvoidObstacleDistance = true;
    this->AvoidObstacleDistance = 25.00f;
    this->AvoidObstacleDistanceMultiplier = 1.00f;
    this->DoSliding = true;
    this->SlideTriggerAvoidObstacleDistanceMultiplier = 9999.00f;
    this->DoDepenetration = true;
    this->DepenetrationTriggerAvoidObstacleDistanceMultiplier = 1.00f;
    this->SlowdownBeforeObstacles = true;
    this->SlowdownForceProportion = 0.25f;
    this->InstantVelocityDirectionChange = false;
    this->Traces.AddDefaulted(2);
    this->TimeBetweenEachTrace = 0.10f;
    this->AsyncTracing = false;
    this->SkipSweepTestIfNoObstaclesSensed = true;
    this->ObstaclesSensedCooldownTime = 2.00f;
}


