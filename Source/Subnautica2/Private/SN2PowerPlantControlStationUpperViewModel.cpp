#include "SN2PowerPlantControlStationUpperViewModel.h"

USN2PowerPlantControlStationUpperViewModel::USN2PowerPlantControlStationUpperViewModel() {
    this->AllOperationsComplete = false;
    this->AllLowerOperationsComplete = false;
    this->Powered = false;
    this->IsConsoleActive = false;
    this->Activated = false;
}

void USN2PowerPlantControlStationUpperViewModel::Setup(ASN2PowerPlantControlRoomUpper* InControlRoom) {
}

void USN2PowerPlantControlStationUpperViewModel::OnPowerPlantPowered() {
}

void USN2PowerPlantControlStationUpperViewModel::OnPowered() {
}

void USN2PowerPlantControlStationUpperViewModel::OnLowerNeedleConnected() {
}

void USN2PowerPlantControlStationUpperViewModel::OnConsoleActivated() {
}

void USN2PowerPlantControlStationUpperViewModel::OnCodeActivated(const AActor* TriggerActor, bool bActivationSuccess) {
}


