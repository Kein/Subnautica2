#include "SN2CharacterSlotItemViewModel.h"

USN2CharacterSlotItemViewModel::USN2CharacterSlotItemViewModel() {
    this->EquippedItem = NULL;
    this->EquippedItemsComponent = NULL;
}

void USN2CharacterSlotItemViewModel::MoveToInventory() {
}

bool USN2CharacterSlotItemViewModel::IsTool() const {
    return false;
}

bool USN2CharacterSlotItemViewModel::IsEquipped() const {
    return false;
}

UTexture2D* USN2CharacterSlotItemViewModel::GetThumbnail() const {
    return NULL;
}

UUWEItemType* USN2CharacterSlotItemViewModel::GetItemType() const {
    return NULL;
}

FText USN2CharacterSlotItemViewModel::GetEquippedItemName() const {
    return FText::GetEmpty();
}

FText USN2CharacterSlotItemViewModel::GetDescription() const {
    return FText::GetEmpty();
}

bool USN2CharacterSlotItemViewModel::CanItemGoInQuickSlot() const {
    return false;
}


