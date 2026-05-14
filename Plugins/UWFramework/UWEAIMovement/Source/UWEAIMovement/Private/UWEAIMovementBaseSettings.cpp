#include "UWEAIMovementBaseSettings.h"

UUWEAIMovementBaseSettings::UUWEAIMovementBaseSettings() {
    this->Mass = 100.00f;
    this->BaseForceMagnitude = 100000.00f;
    this->DragCoefficient = 0.20f;
    this->EnableVolumetricDrag = false;
    this->LockPitch = false;
    this->LockYaw = false;
    this->LockRoll = false;
    this->HardAngleLock = true;
    this->SwitchingOppositeDirectionStrategy = EUWEAIMovementSwitchingOppositeDirectionStrategy::ShortestAngle;
    this->SwitchOppositeDirectionAngleRestriction = 1.57f;
}


