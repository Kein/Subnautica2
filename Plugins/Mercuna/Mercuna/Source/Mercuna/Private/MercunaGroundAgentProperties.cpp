#include "MercunaGroundAgentProperties.h"

FMercunaGroundAgentProperties::FMercunaGroundAgentProperties() {
    this->Category = EMercunaGroundAgentCategory::Character;
    this->Shape = EMercunaGroundAgentShape::Rectangle;
    this->PawnWidth = 0.00f;
    this->PawnLength = 0.00f;
    this->MaxSlopeAngle = 0.00f;
    this->LedgeMarginFraction = 0.00f;
    this->MaxLaunchSpeed = 0.00f;
    this->MaxImpactSpeed = 0.00f;
    this->MinLaunchAngle = 0.00f;
    this->MaxLaunchOrLandAngle = 0.00f;
    this->MaxPerpendicularLaunchAngle = 0.00f;
    this->JumpCostMultiplier = 0.00f;
}

