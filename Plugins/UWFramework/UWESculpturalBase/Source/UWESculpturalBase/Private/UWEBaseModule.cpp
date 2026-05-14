#include "UWEBaseModule.h"

UUWEBaseModule::UUWEBaseModule() {
    this->Enabled = true;
    this->EditorReferenceHeight = 2;
    this->AllowToSpanFloors = false;
    this->BaseHeightInFloor = 0;
    this->OverrideDefaultSelection = false;
    this->AllowedRotations.AddDefaulted(1);
    this->ManuallySpecifyMeshHolderCoords = false;
    this->Version = 0;
}

void UUWEBaseModule::RefreshPieceRules() {
}

uint32 UUWEBaseModule::GetVersion() const {
    return 0;
}


