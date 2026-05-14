#include "SN2BioreactorSimulation.h"

USN2BioreactorSimulation::USN2BioreactorSimulation() {
    this->InventoryId = 0;
    this->CurrentItemType = NULL;
    this->PreConsumedPercentage = 0.00f;
    this->CurrentDepletionStartGameplayTime = 0.00f;
    this->CurrentDepletionEndGameplayTime = 0.00f;
    this->CurrentState = ESN2BioreactorPowerConsumptionState::Normal;
}

void USN2BioreactorSimulation::OnBioreactorInventoryItemAdded(const int32& SourceInventoryId, const FUWEInventoryItem& InventoryItem) {
}


