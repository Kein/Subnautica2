#include "UWESelectionBrush.h"

FUWESelectionBrush::FUWESelectionBrush() {
    this->ForwardOffset = 0;
    this->UseWorldUpForZ = false;
    this->UseTraceDirForX = false;
    this->RequireFullSelectionX = false;
    this->RequireFullSelectionY = false;
    this->RequireFullSelectionZ = false;
    this->LimitToFlatSurfaces = false;
    this->LimitToSameBrushType = false;
    this->LimitToSameSection = false;
    this->LimitToSameOccupancy = false;
    this->LimitToSpecifiedHeightInFloor = false;
    this->UseHitAsXCenter = false;
    this->PlaceInitialPiece = false;
}

