#include "UWEAIMovementComponentGlobalSettings.h"

UUWEAIMovementComponentGlobalSettings::UUWEAIMovementComponentGlobalSettings() {
    this->FixedDeltaTime = 0.03f;
    this->ActorUpdateTimeMin = 0.03f;
    this->ActorUpdateTimeMax = 0.10f;
    this->MaxIterationCountPerFrame = 10;
    this->MaxTraceDistance = 2000.00f;
    this->EnforceSweepTestAtProximityToPlayer = true;
    this->EnforceSweepTestDistance = 200.00f;
}


