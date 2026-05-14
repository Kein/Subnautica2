#include "UWEBrushTypeSettings.h"

FUWEBrushTypeSettings::FUWEBrushTypeSettings() {
    this->TimePerCell = 0.00f;
    this->SnappedPlacementFloorOffset = 0;
    this->FlexibleFloorHeight = false;
    this->CeilingOffset = 0;
    this->IgnoreFloorBoundariesForSolve = false;
    this->ShowFeedbackWhenInvalid = false;
    this->ShowAutomaticPreviewArrows = false;
    this->AlwaysUseFullCellForOverlap = false;
    this->UsesFacingDirectionsForSolve = false;
    this->DisableDefaultOverlap = false;
    this->IsAdditive = false;
}

