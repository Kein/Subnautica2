#include "UWEAIMovementSpeedAlterationModuleSettings.h"

UUWEAIMovementSpeedAlterationModuleSettings::UUWEAIMovementSpeedAlterationModuleSettings() {
    this->bResetOnMotionStart = false;
    this->BlendMultiplierBetweenRequests = true;
    this->BlendMultiplierBetweenRequestsSpeed = 0.50f;
    this->EnableRandomSpeed = true;
    this->RandomSpeeds.AddDefaulted(1);
    this->EnableSpeedAnimationByTime = false;
    this->EnableRandomTimeDilation = false;
    this->EnableSpeedAnimationByDistanceFromStartLocation = false;
    this->EnableSpeedAnimationByDistanceFromEndLocation = false;
}


