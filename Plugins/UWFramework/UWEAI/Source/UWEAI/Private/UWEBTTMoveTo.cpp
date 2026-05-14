#include "UWEBTTMoveTo.h"

UUWEBTTMoveTo::UUWEBTTMoveTo() {
    this->NodeName = TEXT("UWE Move To");
    this->NavigationType = EUWEBTTMoveToNavigationType::DirectSteering;
    this->PathfindingAllowPartialPath = false;
    this->PathfindingAllowFallbackToDirectSteering = true;
    this->IncludeTargetRadiusInApproachDistance = false;
    this->IncludeAgentRadiusInApproachDistance = true;
    this->ApproachDistance = 500.00f;
    this->PickClosestPointOnTarget = false;
    this->PickClosestPointOnTargetCollisionChannel = ECC_Visibility;
    this->UpdateClosestPointOnTarget = false;
    this->UpdateClosestPointOnTargetCooldown = 1.00f;
    this->StartForceProportion = 1.00f;
    this->FinishForceProportion = 0.00f;
    this->PredictLocation = false;
    this->PredictedMotionLengthMult = 1.00f;
    this->AlwaysDisableAuxiliaryModules = false;
    this->DisableAuxiliaryModulesByDistance = -1.00f;
    this->AuxiliaryModulesToDisable = 255;
    this->AddActorTargetToObstacleAvoidanceIgnoredList = true;
    this->IgnoreCollisionWithActorTarget = false;
}


