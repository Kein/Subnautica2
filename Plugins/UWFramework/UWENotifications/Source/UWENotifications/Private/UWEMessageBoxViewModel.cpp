#include "UWEMessageBoxViewModel.h"

UUWEMessageBoxViewModel::UUWEMessageBoxViewModel() {
    this->Type = EUWEMessageBoxType::Ok;
    this->World = NULL;
    this->WidgetClass = NULL;
}

void UUWEMessageBoxViewModel::Close(bool bCancelled) {
}


