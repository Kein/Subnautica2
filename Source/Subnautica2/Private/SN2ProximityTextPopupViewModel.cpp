#include "SN2ProximityTextPopupViewModel.h"

USN2ProximityTextPopupViewModel::USN2ProximityTextPopupViewModel() {
    this->Popup = NULL;
    this->Hovered = false;
    this->Popped = false;
    this->bTranslationFailed = false;
    this->bRequiresTranslation = false;
}

void USN2ProximityTextPopupViewModel::RefreshText() {
}

USN2ProximityTextPopupViewModel* USN2ProximityTextPopupViewModel::Get(UObject* WorldContext) {
    return NULL;
}


