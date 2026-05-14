#include "SN2InventoryViewModel.h"

USN2InventoryViewModel::USN2InventoryViewModel() {
    this->InventoryComponent = NULL;
    this->OtherInventoryComponent = NULL;
    this->EquippedItemsComponent = NULL;
    this->ToolbarComponent = NULL;
    this->HasValidItems = false;
    this->InventorySize = 0;
    this->Columns = 0;
    this->bAllowedToDrop = false;
}

void USN2InventoryViewModel::SetAllowedToDrop(bool bInAllowedToDrop) {
}

void USN2InventoryViewModel::OnItemRemoved(const FUWEInventoryItem& InventoryItem) {
}

void USN2InventoryViewModel::OnItemAdded(const FUWEInventoryItem& InventoryItem) {
}

void USN2InventoryViewModel::OnInventoryChanged() {
}

FText USN2InventoryViewModel::GetInventoryName() const {
    return FText::GetEmpty();
}

void USN2InventoryViewModel::Disconnect() {
}

void USN2InventoryViewModel::ClearStacksRemoved() {
}

void USN2InventoryViewModel::ClearStacksAdded() {
}


