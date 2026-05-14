#include "SN2EquippedItemsViewModel.h"

USN2EquippedItemsViewModel::USN2EquippedItemsViewModel() {
    this->EquippedItems = NULL;
}

bool USN2EquippedItemsViewModel::Refresh() const {
    return false;
}

void USN2EquippedItemsViewModel::OnEquippedItemsChanged() {
}

USN2CharacterSlotItemViewModel* USN2EquippedItemsViewModel::GetViewModelForSlot(FGameplayTag SlotTag) {
    return NULL;
}


