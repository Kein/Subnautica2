#include "MercunaNavigationLink.h"

FMercunaNavigationLink::FMercunaNavigationLink() {
    this->Direction = EMercunaNavigationLinkDirection::BothWays;
    this->bUseDistanceAsCost = false;
    this->LeftToRightCost = 0.00f;
    this->RightToLeftCost = 0.00f;
    this->LeftAutoCompletionDistance = 0.00f;
    this->RightAutoCompletionDistance = 0.00f;
    this->LeftEntryAngle = 0.00f;
    this->RightEntryAngle = 0.00f;
}

