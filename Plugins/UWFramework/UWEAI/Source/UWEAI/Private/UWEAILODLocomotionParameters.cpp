#include "UWEAILODLocomotionParameters.h"

FUWEAILODLocomotionParameters::FUWEAILODLocomotionParameters() {
    this->MovementEnabled = false;
    this->DisableMovementOnlyIfCrawling = false;
    this->QualityLevel = 0.00f;
    this->CollisionEnabled = false;
    this->ForceToStayInsideHabitationArea = false;
    this->CanAbortSweepTestByLineTrace = false;
}

