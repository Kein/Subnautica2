#include "UWEAIMovementOscillatoryMotionModuleSettings.h"

UUWEAIMovementOscillatoryMotionModuleSettings::UUWEAIMovementOscillatoryMotionModuleSettings() {
    this->bResetOnMotionStart = false;
    this->RotationAxis = EUWEAIMovementOscillatoryMotionRotationAxis::ZAxis;
    this->EnableHalfAngleAnimationCurve = false;
    this->HalfAngle = 1.05f;
    this->HalfAngleRandomFromBaseValue = 0.00f;
    this->HalfAngleRandomTimeInterval = 3.00f;
    this->EnableRotationSpeedAnimationCurve = false;
    this->RotationSpeed = 1.57f;
    this->bEnableEaseInOut = false;
    this->EaseInOutExp = 2.00f;
}


