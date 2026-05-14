#include "SN2QuickSlotEntryViewModel.h"

USN2QuickSlotEntryViewModel::USN2QuickSlotEntryViewModel() {
    this->ToolbarComponent = NULL;
    this->ItemType = NULL;
    this->Thumbnail = NULL;
    this->bPublished = false;
    this->IsActive = false;
    this->IsSelected = false;
    this->IsEquipped = false;
    this->HasStatus = false;
    this->StatusPercent = 0.00f;
    this->SlotNumber = -1;
    this->IsEnergyTool = false;
}

void USN2QuickSlotEntryViewModel::SwapSlots(USN2QuickSlotEntryViewModel* TargetSlot) {
}

void USN2QuickSlotEntryViewModel::SetTertiaryActionDescription(FText Desc) {
}

void USN2QuickSlotEntryViewModel::SetSecondaryActionDescription(FText Desc) {
}

void USN2QuickSlotEntryViewModel::SetPrimaryActionDescription(FText Desc) {
}

void USN2QuickSlotEntryViewModel::RemoveFromToolbar(int32 RemoveSlotNumber) {
}

void USN2QuickSlotEntryViewModel::Reload() {
}

void USN2QuickSlotEntryViewModel::OnEnergyChanged(float PercentEnergy) {
}

void USN2QuickSlotEntryViewModel::MoveFromToolbarToInventory(UUWEInventoryComponent* Inventory) {
}

bool USN2QuickSlotEntryViewModel::IsItemConsumable() const {
    return false;
}

TArray<FText> USN2QuickSlotEntryViewModel::GetLocalPlayerActiveWarnings(UObject* WorldContextObject) const {
    return TArray<FText>();
}

TArray<FConsumableInfo> USN2QuickSlotEntryViewModel::GetConsumableInfo() const {
    return TArray<FConsumableInfo>();
}

void USN2QuickSlotEntryViewModel::DropSlot(UObject* WorldContextObject) {
}

void USN2QuickSlotEntryViewModel::ClearSlot(UObject* WorldContextObject) {
}


