#include "SN2PlayerUpgradesPlayerStateComponent.h"

USN2PlayerUpgradesPlayerStateComponent::USN2PlayerUpgradesPlayerStateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ToolbarIncreasedSound = NULL;
    this->InventoryIncreasedSound = NULL;
    this->PassiveBiomodSlotsIncreasedSound = NULL;
}

void USN2PlayerUpgradesPlayerStateComponent::OnPawnSet(APlayerState* Player, APawn* NewPawn, APawn* OldPawn) {
}

void USN2PlayerUpgradesPlayerStateComponent::OnEventTrackerIncreaseToolbarEvent(FUWEEventKey EventKey, int32 OldValue, int32 NewValue) {
}

void USN2PlayerUpgradesPlayerStateComponent::OnEventTrackerIncreasePassiveBiomodSlotsEvent(FUWEEventKey EventKey, int32 OldValue, int32 NewValue) {
}

void USN2PlayerUpgradesPlayerStateComponent::OnEventTrackerIncreaseInventoryEvent(FUWEEventKey EventKey, int32 OldValue, int32 NewValue) {
}


