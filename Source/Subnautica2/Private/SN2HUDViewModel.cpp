#include "SN2HUDViewModel.h"

USN2HUDViewModel::USN2HUDViewModel() {
    this->IsDepthMeterVisible = true;
    this->IsCompassVisible = true;
    this->IsQuickslotsBarVisible = true;
    this->IsControllerConnected = true;
    this->AreRadialBarsVisible = true;
}

USN2HUDViewModel* USN2HUDViewModel::TryGetHUDViewModel(UObject* WorldContext) {
    return NULL;
}

void USN2HUDViewModel::SetAreRadialBarsVisible(bool bValue) {
}


