#include "UWEAIMovementCoreModuleSettings.h"

UUWEAIMovementCoreModuleSettings::UUWEAIMovementCoreModuleSettings() {
    this->BaseForceMagnitudeMultiplier = 1.00f;
    this->DragCoefficientMultiplier = 1.00f;
    this->bEnableAngularVelocity = true;
    this->MaximumAngularSpeed = 6.28f;
    this->AngularAcceleration = 6.28f;
    this->AngularDragToAcceleration = 0.50f;
    this->EnableArriveToTargetAngle = true;
    this->MatchSpeedWithTargetAtAngleDiff = 0.10f;
    this->EnableRotationRoll = true;
    this->RotationRollRestoreSpeed = 60.00f;
    this->AllowLookRotation = false;
    this->LookRotationAngle = 3.14f;
    this->DropVelocityByTurningAngle = false;
    this->TurningAngleForVelocityDrop = 1.57f;
    this->TurningAngleVelocityDropProportion = 0.00f;
    this->StoppingVelocityProportion = 0.05f;
    this->StoppingVelocityAlignmentCosEpsilon = 0.01f;
    this->BuoyancyAccelerationMultiplier = 1.00f;
}


