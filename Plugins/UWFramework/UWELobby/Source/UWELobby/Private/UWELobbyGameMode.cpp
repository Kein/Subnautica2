#include "UWELobbyGameMode.h"
#include "Templates/SubclassOf.h"

AUWELobbyGameMode::AUWELobbyGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AUWELobbyGameMode::TravelToLevel(const FString& LevelName, const FString& SaveSlotName, const FString& GameModeAlias) {
}

void AUWELobbyGameMode::StartNewServerGame(TSubclassOf<AGameModeBase> GameModeClass) {
}

void AUWELobbyGameMode::StartNewLocalGameWithOptions(const FString& Options) {
}

void AUWELobbyGameMode::StartNewLocalGame(TSubclassOf<AGameModeBase> GameModeClass) {
}

void AUWELobbyGameMode::LoadLocalGame(const FString& SlotName, const FString& GameModeAlias, const FString& CheckpointName) {
}

void AUWELobbyGameMode::ContinueFromLatestSave(const FString& LatestSave, const FString& GameModeAlias) {
}

void AUWELobbyGameMode::ConnectToServer(const FString& ServerUrl) {
}


