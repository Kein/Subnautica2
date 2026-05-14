#include "SN2PowerPlantControlStationLowerViewModel.h"

USN2PowerPlantControlStationLowerViewModel::USN2PowerPlantControlStationLowerViewModel() {
    this->AllOperationsComplete = false;
    this->AllUpperOperationsComplete = false;
    this->IsConsoleActive = false;
    this->NeedleBlocked = true;
    this->NeedleIdle = true;
    this->NeedleDroppedSuccessfully = false;
}

void USN2PowerPlantControlStationLowerViewModel::Setup(ASN2PowerPlantControlRoomLower* InControlRoom) {
}

void USN2PowerPlantControlStationLowerViewModel::OnNeedleLaunched(bool bLaunchSuccess) {
}

void USN2PowerPlantControlStationLowerViewModel::OnNeedleCompleted() {
}

void USN2PowerPlantControlStationLowerViewModel::OnNeedleBlockageRemoved() {
}

void USN2PowerPlantControlStationLowerViewModel::OnConsoleActivated() {
}


