#include "UWEServerLobbyComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

UUWEServerLobbyComponent::UUWEServerLobbyComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UUWEServerLobbyComponent::StartNewGame_Implementation(TSubclassOf<AGameModeBase> GameModeClass) {
}

void UUWEServerLobbyComponent::OnRep_SaveSlots() {
}

void UUWEServerLobbyComponent::NotifyEnteringGame() {
}

void UUWEServerLobbyComponent::LoadGame_Implementation(const FString& SlotName, const FString& GameModeAlias) {
}

void UUWEServerLobbyComponent::BroadcastEnteringGame() {
}

void UUWEServerLobbyComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UUWEServerLobbyComponent, SaveSlots);
}


