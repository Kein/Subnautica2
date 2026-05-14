#include "SN2RespawnComponent.h"

USN2RespawnComponent::USN2RespawnComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void USN2RespawnComponent::Respawn(TArray<UUWEItemType*> LostItems, FGameplayTag RespawnReason) {
}

void USN2RespawnComponent::ConfirmRespawn_Implementation() {
}

void USN2RespawnComponent::Client_Respawning_Implementation(const FUWERespawnData& Data) {
}


