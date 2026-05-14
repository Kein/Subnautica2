#include "MercunaGroundNavigationConfiguration.h"

FMercunaGroundNavigationConfiguration::FMercunaGroundNavigationConfiguration() {
    this->StopAtDestination = false;
    this->MinAvoidanceTime = 0.00f;
    this->AvoidanceWhenStationary = EMercunaAvoidanceWhenStationary::None;
    this->SlopePenalty = 0.00f;
    this->TractionEstimate = 0.00f;
    this->LookAheadDistance = 0.00f;
    this->ShrinkCapsuleDuringAutoJumps = false;
    this->bSetControllerRotation = false;
}

