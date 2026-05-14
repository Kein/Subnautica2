#include "UWEToolBatteryMesh.h"

UUWEToolBatteryMesh::UUWEToolBatteryMesh(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHiddenInGame = true;
    this->bReceivesDecals = false;
    this->CastShadow = false;
    this->bHasPowerInventoryComponent = false;
    this->VisibilitySetting = EUWEToolBatteryVisibility::HiddenWhenNotEquipped;
    this->PowerInventorySlot = 0;
}

void UUWEToolBatteryMesh::UpdateVisibility() {
}


void UUWEToolBatteryMesh::OnEnergyChangedCallback(float PercentEnergy) {
}


float UUWEToolBatteryMesh::GetEnergyPercent() const {
    return 0.0f;
}


