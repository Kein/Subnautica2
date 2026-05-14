#include "SN2AttributeGaugeViewModel.h"

USN2AttributeGaugeViewModel::USN2AttributeGaugeViewModel() {
    this->WorldContextObject = NULL;
    this->bShouldShowSurvivalGauges = true;
}

void USN2AttributeGaugeViewModel::OnSettingsChanged(const FUWEGameConfigSettings& ChangedSettings) {
}


