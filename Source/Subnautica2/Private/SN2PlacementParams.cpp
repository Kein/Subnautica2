#include "SN2PlacementParams.h"

FSN2PlacementParams::FSN2PlacementParams() {
    this->AllowedSurfaces = 0;
    this->AllowedZones = 0;
    this->OverrideCurrentSnapping = false;
    this->SnappingOverride = EBuilderSnapping::Freeform;
    this->OverrideLocationSnapSize = false;
    this->LocationSnapSize = 0.00f;
    this->OverrideUserRotationIncrement = false;
    this->UserRotationIncrement = 0.00f;
    this->RotatesAtPlacementSurface = 0;
    this->bUseSnappingRotation = false;
    this->bOverrideInteractDistance = false;
    this->bAllowUserRotationOnWall = false;
    this->InteractDistance = 0.00f;
    this->HorizontalSurfaceThreshold = 0.00f;
}

