#include "SN2InventoryItemViewModel.h"

USN2InventoryItemViewModel::USN2InventoryItemViewModel() {
    this->bAllowedToDrop = false;
    this->Inventory = NULL;
    this->OtherInventory = NULL;
    this->IsInLocalInventory = false;
    this->bBusy = false;
    this->StackSize = 0;
    this->ToolbarNumSlots = 0;
    this->bPublished = false;
    this->bFilteredForOtherInventory = false;
}

void USN2InventoryItemViewModel::SetToolbarNumSlots(int32 NewSize) {
}

void USN2InventoryItemViewModel::SetTertiaryActionWithModifierDescription(FText Desc) {
}

void USN2InventoryItemViewModel::SetTertiaryActionDescription(FText Desc) {
}

void USN2InventoryItemViewModel::SetSecondaryActionWithModifierDescription(FText Desc) {
}

void USN2InventoryItemViewModel::SetSecondaryActionDescription(FText Desc) {
}

void USN2InventoryItemViewModel::SetQuaternaryActionWithModifierDescription(FText Desc) {
}

void USN2InventoryItemViewModel::SetQuaternaryActionDescription(FText Desc) {
}

void USN2InventoryItemViewModel::SetPrimaryActionWithModifierDescription(FText Desc) {
}

void USN2InventoryItemViewModel::SetPrimaryActionDescription(FText Desc) {
}

void USN2InventoryItemViewModel::SetAllowedToDrop(bool bInAllowedToDrop) {
}

void USN2InventoryItemViewModel::OnItemAttributeChanged(const FUWEInventoryItem& InventoryItem) {
}

void USN2InventoryItemViewModel::MoveToQuickslot(int32 SlotIndex) {
}

bool USN2InventoryItemViewModel::MoveToOtherInventory(bool MoveAll) {
    return false;
}

FText USN2InventoryItemViewModel::MissingInteractionReason() const {
    return FText::GetEmpty();
}

bool USN2InventoryItemViewModel::IsOwnerPilotingVehicle() const {
    return false;
}

bool USN2InventoryItemViewModel::IsItemInteractable() const {
    return false;
}

bool USN2InventoryItemViewModel::IsItemEquippable(bool ExcludeQuickslots) const {
    return false;
}

bool USN2InventoryItemViewModel::IsItemConsumable() const {
    return false;
}

void USN2InventoryItemViewModel::Interact() {
}

bool USN2InventoryItemViewModel::HasStatus() const {
    return false;
}

bool USN2InventoryItemViewModel::HasOtherInventory() const {
    return false;
}

float USN2InventoryItemViewModel::GetStatusPercent() const {
    return 0.0f;
}

UUWEItemType* USN2InventoryItemViewModel::GetItemType() const {
    return NULL;
}

FUWEInventoryItem USN2InventoryItemViewModel::GetInventoryItem() {
    return FUWEInventoryItem{};
}

TArray<FConsumableInfo> USN2InventoryItemViewModel::GetConsumableInfo() const {
    return TArray<FConsumableInfo>();
}

TArray<FText> USN2InventoryItemViewModel::GetActiveWarnings() const {
    return TArray<FText>();
}

void USN2InventoryItemViewModel::Equip() {
}

void USN2InventoryItemViewModel::Drop() {
}

bool USN2InventoryItemViewModel::CanItemGoInQuickSlot() const {
    return false;
}


