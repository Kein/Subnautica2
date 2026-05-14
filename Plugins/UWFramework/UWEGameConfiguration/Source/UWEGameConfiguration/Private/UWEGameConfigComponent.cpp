#include "UWEGameConfigComponent.h"
#include "Net/UnrealNetwork.h"

UUWEGameConfigComponent::UUWEGameConfigComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UUWEGameConfigComponent::OverrideGameSettings(const FUWEGameConfigSettings& InGameSettings) {
}

void UUWEGameConfigComponent::OverrideCraftingSettings(const FUWECraftingSettings& InCraftingSettings) {
}

void UUWEGameConfigComponent::OnRep_GameSettings() {
}

FUWEGameConfigSettings UUWEGameConfigComponent::GetGameSettings() const {
    return FUWEGameConfigSettings{};
}

void UUWEGameConfigComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UUWEGameConfigComponent, GameSettings);
}


