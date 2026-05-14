#include "UWEOnlineSessionSubsystem.h"

UUWEOnlineSessionSubsystem::UUWEOnlineSessionSubsystem() {
    this->bUseBeacons = false;
    this->PendingInvite = NULL;
    this->InProgressJoin = NULL;
    this->bUsePresenceDefault = true;
    this->MaxSessionPlayerCount = 4;
    this->bShouldAdvertiseSessions = true;
}

void UUWEOnlineSessionSubsystem::HostSessionAsync(APlayerController* HostingPlayerController, bool AllowAllFriends, const FString& GameModeAlias, const FString& ServerName, const FString& SaveSlot, const FString& SaveCheckpoint) {
}


