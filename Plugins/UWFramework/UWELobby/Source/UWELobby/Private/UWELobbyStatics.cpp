#include "UWELobbyStatics.h"

UUWELobbyStatics::UUWELobbyStatics() {
}

void UUWELobbyStatics::SetWorldLevel(const FString& LevelName) {
}

bool UUWELobbyStatics::IsCustomWorldLevel() {
    return false;
}

FString UUWELobbyStatics::GetWorldLevelName() {
    return TEXT("");
}

TSoftObjectPtr<UWorld> UUWELobbyStatics::GetWorldLevel() {
    return NULL;
}

FString UUWELobbyStatics::GetTailscaleIp() {
    return TEXT("");
}

FString UUWELobbyStatics::GetLocalIP() {
    return TEXT("");
}

void UUWELobbyStatics::CopyToClipboard(const FString& String) {
}


