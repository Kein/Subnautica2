#include "CommonSessionSubsystem.h"

UCommonSessionSubsystem::UCommonSessionSubsystem() {
    this->bUseLobbiesDefault = true;
    this->bUseLobbiesVoiceChatDefault = false;
    this->bUseBeacons = true;
    this->ReservationBeaconHostState = NULL;
    this->BeaconTeamCount = 2;
    this->BeaconTeamSize = 8;
    this->BeaconMaxReservations = 16;
}

void UCommonSessionSubsystem::QuickPlaySession(APlayerController* JoiningOrHostingPlayer, UCommonSession_HostSessionRequest* Request) {
}

void UCommonSessionSubsystem::JoinSession(APlayerController* JoiningPlayer, UCommonSession_SearchResult* Request) {
}

void UCommonSessionSubsystem::HostSession(APlayerController* HostingPlayer, UCommonSession_HostSessionRequest* Request) {
}

void UCommonSessionSubsystem::FindSessions(APlayerController* SearchingPlayer, UCommonSession_SearchSessionRequest* Request) {
}

UCommonSession_SearchSessionRequest* UCommonSessionSubsystem::CreateOnlineSearchSessionRequest() {
    return NULL;
}

UCommonSession_HostSessionRequest* UCommonSessionSubsystem::CreateOnlineHostSessionRequest() {
    return NULL;
}

void UCommonSessionSubsystem::CleanUpSessions() {
}


