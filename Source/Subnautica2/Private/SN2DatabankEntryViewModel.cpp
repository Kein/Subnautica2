#include "SN2DatabankEntryViewModel.h"

USN2DatabankEntryViewModel::USN2DatabankEntryViewModel() {
    this->Entry = NULL;
    this->IndentLevel = 0;
    this->IsSelected = false;
    this->IsVisible = true;
}

void USN2DatabankEntryViewModel::SetIsSelected(bool NewValue) {
}

FText USN2DatabankEntryViewModel::GetEntryTitle() const {
    return FText::GetEmpty();
}

FText USN2DatabankEntryViewModel::GetEntryText() const {
    return FText::GetEmpty();
}

TSoftObjectPtr<UTexture2D> USN2DatabankEntryViewModel::GetEntryImage() const {
    return NULL;
}


