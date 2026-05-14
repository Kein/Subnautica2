#include "UWESculpturalBaseModuleSettings.h"

UUWESculpturalBaseModuleSettings::UUWESculpturalBaseModuleSettings() {
    this->UWESelectionSphereTraceRadius = 25.00f;
    this->SculptedBaseTraceChannel = ECC_GameTraceChannel1;
    this->CellSize = 100.00f;
    this->BlockingHighlightFadeInDuration = 0.50f;
    this->BlockingHighlightFadeOutDuration = 0.50f;
    this->FloorHeight = 5;
    this->BottomSnappingOffset = 0.00f;
    this->RenderAirVolumesForBase = true;
    this->AutoGenErrorRange = 0.50f;
    this->BaseCorePowerDrainPerSecond = 2.00f;
    this->BaseSignalText = FText::FromString(TEXT("Base"));
    this->RefundText = FText::FromString(TEXT("Refund"));
    this->PingRefundText = FText::FromString(TEXT("Refund Bases"));
    this->MaxSupportLength = 1000.00f;
    this->MaxGlobalCellCount = 315000;
}


