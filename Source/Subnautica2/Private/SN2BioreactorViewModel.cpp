#include "SN2BioreactorViewModel.h"

USN2BioreactorViewModel::USN2BioreactorViewModel() {
    this->bIsItemBeingConsumed = false;
    this->PowerOutput = 0.00f;
    this->PowerConsumptionState = ESN2BioreactorPowerConsumptionState::Off;
    this->InventoryViewModel = NULL;
    this->bioreactor = NULL;
    this->BioreactorInventory = NULL;
    this->InteractionComponent = NULL;
}

void USN2BioreactorViewModel::Teardown() {
}

void USN2BioreactorViewModel::SetupWithoutInteractor(ASN2Bioreactor* InBioreactor) {
}

void USN2BioreactorViewModel::Setup(ASN2Bioreactor* InBioreactor, UUWEInventoryComponent* InBioreactorInventory, USN2BioreactorInteractionComponent* InInteractionComponent) {
}

void USN2BioreactorViewModel::SetState(ESN2BioreactorPowerConsumptionState NewPowerConsumptionState) {
}

void USN2BioreactorViewModel::OnPowerOutputChanged(float Power) {
}

void USN2BioreactorViewModel::OnPowerConsumptionStateChanged(ESN2BioreactorPowerConsumptionState State) {
}

void USN2BioreactorViewModel::OnItemChanged() {
}

float USN2BioreactorViewModel::GetConsumptionPercentage() const {
    return 0.0f;
}


