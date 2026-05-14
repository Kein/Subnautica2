#include "MercunaGroundNavigationSteeringParameters.h"

FMercunaGroundNavigationSteeringParameters::FMercunaGroundNavigationSteeringParameters() {
    this->bKinematicPathfinding = false;
    this->MaxSpeed = 0.00f;
    this->MaxAcceleration = 0.00f;
    this->MaxAngularSpeed = 0.00f;
    this->IdealTurningRadius = 0.00f;
    this->MinTurningRadius = 0.00f;
    this->PowerToWeightRatio = 0.00f;
    this->MaxBrakeDeceleration = 0.00f;
    this->GroundFriction = 0.00f;
}

