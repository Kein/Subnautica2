#include "SN2InventoryScreenViewModel.h"

USN2InventoryScreenViewModel::USN2InventoryScreenViewModel() {
    this->OtherInventoryBecameInvalid = false;
    this->InventoryComponent = NULL;
    this->OtherInventoryComponent = NULL;
    this->OtherInventoryInteraction = NULL;
    this->EquippedItemsComponent = NULL;
    this->ToolbarComponent = NULL;
    this->Inventory = NULL;
    this->OtherInventory = NULL;
    this->EquippedItems = NULL;
}

void USN2InventoryScreenViewModel::SetQuickSlot(int32 SlotIndex, UUWEItemType* ItemType, const FUWEInventoryItem InventoryItem) {
}

void USN2InventoryScreenViewModel::OnOtherInventoryInteractionEnabledChanged(bool bInteractionEnabled) {
}

bool USN2InventoryScreenViewModel::HasOtherInventory() const {
    return false;
}

bool USN2InventoryScreenViewModel::HasEquippedItems() const {
    return false;
}

USN2InventoryViewModel* USN2InventoryScreenViewModel::GetOtherInventory() {
    return NULL;
}

USN2InventoryViewModel* USN2InventoryScreenViewModel::GetInventory() {
    return NULL;
}

USN2EquippedItemsViewModel* USN2InventoryScreenViewModel::GetEquippedItems() {
    return NULL;
}


