#include "SN2EditBrushKey.h"

FSN2EditBrushKey::FSN2EditBrushKey() {
    this->IsNearbyBase = false;
    this->MustHitBuildAhead = false;
    this->AllowedSurfaces = 0;
    this->AllowedInside = false;
    this->AllowedOutside = false;
    this->UseManualMappingForSelectionSize = false;
    this->SelectionSizeMappingID = 0;
}

