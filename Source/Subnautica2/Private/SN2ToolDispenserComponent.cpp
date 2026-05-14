#include "SN2ToolDispenserComponent.h"

USN2ToolDispenserComponent::USN2ToolDispenserComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AllowPlacing = false;
    this->AutoSpawn = true;
    this->SpawnCooldownRate = 10.00f;
    this->SpawnTimerStartedAt = 0.00f;
}

void USN2ToolDispenserComponent::SpawnItem(TSoftClassPtr<AActor> Class) {
}

void USN2ToolDispenserComponent::SpawnDefaultItem() {
}


