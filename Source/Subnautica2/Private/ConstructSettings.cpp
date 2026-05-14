#include "ConstructSettings.h"

FConstructSettings::FConstructSettings() {
    this->InteractDistance = 0.00f;
    this->StickyTargetThresholdAngle = 0.00f;
    this->StickyTargetDistanceMultiplier = 0.00f;
    this->RotationStep = 0;
    this->ConstructionSpeed = 0.00f;
    this->ConstructFinishDuration = 0.00f;
    this->RefundPingData = NULL;
    this->DirectionalPreviewArrow = NULL;
    this->BaseSnapRadius = 0.00f;
    this->FloorSnapDistance = 0.00f;
    this->CeilingSnapDistance = 0.00f;
    this->WallMouldingStandoff = 0.00f;
    this->SurfaceSnapping = 0;
}

