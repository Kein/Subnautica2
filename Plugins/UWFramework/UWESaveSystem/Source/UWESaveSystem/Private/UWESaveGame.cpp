#include "UWESaveGame.h"

UUWESaveGame::UUWESaveGame() {
    this->UserIndex = 0;
}

void UUWESaveGame::SetIsMultiplayer(bool IsMultiplayer) {
}

EUWESaveGameValidity UUWESaveGame::GetValidityFromVersion(const int32 Version) {
    return EUWESaveGameValidity::Invalid_NotSet;
}

FDateTime UUWESaveGame::GetTimeStamp() {
    return FDateTime{};
}

FString UUWESaveGame::GetSlotName() const {
    return TEXT("");
}

int32 UUWESaveGame::GetMinSupportedVersion() {
    return 0;
}

int32 UUWESaveGame::GetLatestVersion() {
    return 0;
}

bool UUWESaveGame::GetIsMultiplayer() const {
    return false;
}


