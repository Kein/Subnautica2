#include "SN2DraggedItemViewModel.h"

USN2DraggedItemViewModel::USN2DraggedItemViewModel() {
    this->InventoryItemViewModel = NULL;
    this->QuickSlotItemViewModel = NULL;
    this->CharacterSlotItemViewModel = NULL;
    this->ItemType = NULL;
}

void USN2DraggedItemViewModel::SetItemType(UUWEItemType* InItemType) {
}

void USN2DraggedItemViewModel::InitializeFromQuickSlot(USN2QuickSlotEntryViewModel* InViewModel) {
}

void USN2DraggedItemViewModel::InitializeFromInventory(USN2InventoryItemViewModel* InViewModel) {
}

void USN2DraggedItemViewModel::InitializeFromCharacterSlot(USN2CharacterSlotItemViewModel* InViewModel) {
}

void USN2DraggedItemViewModel::DropInQuickSlot(USN2QuickSlotEntryViewModel* QuickSlotEntryViewModel) {
}

void USN2DraggedItemViewModel::DropInInventory(USN2InventoryViewModel* InventoryViewModel) {
}

void USN2DraggedItemViewModel::DropInCharacterSlot() {
}


