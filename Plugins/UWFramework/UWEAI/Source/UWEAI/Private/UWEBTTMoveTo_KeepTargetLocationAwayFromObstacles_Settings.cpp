#include "UWEBTTMoveTo_KeepTargetLocationAwayFromObstacles_Settings.h"

FUWEBTTMoveTo_KeepTargetLocationAwayFromObstacles_Settings::FUWEBTTMoveTo_KeepTargetLocationAwayFromObstacles_Settings() {
    this->Enabled = false;
    this->Distance = 0.00f;
    this->StaticObstaclesOnly = false;
    this->TraceType = EUWEBTTMoveToTraceType::LineTraceDown;
    this->TraceCheckType = EUWEBTTMoveToTraceCheckType::FirstBlockingHit;
    this->FilterSurfaceTypes = false;
    this->SurfaceTypes = 0;
}

