#include "UWESelectionParams.h"

FUWESelectionParams::FUWESelectionParams() {
    this->DefaultSelectionSizeIndex = 0;
    this->UsedNormal = EUWESelectionNormal::ExteriorNormal;
    this->UsedYAxis = EUWESelectionYAxis::GridAlignedPlayerUp;
    this->RequireFullSelection = 0;
    this->LimitToFlatSurfaces = false;
    this->ExcludeInteriorCorners = false;
    this->ExcludeSpecifiedModules = false;
    this->LimitToOccupied = false;
    this->LimitToSameBrushType = false;
    this->LimitToSameFloor = false;
    this->LimitToSpecifiedHeightInFloor = false;
}

