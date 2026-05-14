#include "MercunaSurfaceNavigationConfiguration.h"

FMercunaSurfaceNavigationConfiguration::FMercunaSurfaceNavigationConfiguration() {
    this->StopAtDestination = false;
    this->MinAvoidanceTime = 0.00f;
    this->AvoidanceWhenStationary = EMercunaAvoidanceWhenStationary::None;
    this->LookAheadDistance = 0.00f;
    this->bSetControllerRotation = false;
}

