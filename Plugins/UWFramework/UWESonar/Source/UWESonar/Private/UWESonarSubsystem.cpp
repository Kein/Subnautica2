#include "UWESonarSubsystem.h"

UUWESonarSubsystem::UUWESonarSubsystem() {
    this->UWESonarClientId = TEXT("519ee4c0e5083d5dcb1544e705bbc94b");
    this->UWESonarClientSecret = TEXT("0qavidfylUNTeG0hnBPsKdW6+xsBL/AKEF5q5OxJ");
    this->bEnableTwitch = true;
    this->UWESonarHeartbeatTimeSeconds = 5;
    this->UWESonarLazyUpdateTimeSeconds = 120;
    this->SonarPollTimeSeconds = 0.50f;
    this->UWEMaxConnectedPlayers = 4;
    this->bDebugMode = false;
    this->bInitialized = false;
    this->bInStartup = false;
    this->bShowAllPlayerGames = true;
    this->bIsTwitchConnected = false;
    this->BuildNumber = -1;
    this->SonarState = EUWESonarState::None;
    this->JoinGameId = -1;
    this->UserSubsystem = NULL;
    this->SonarAPISubsystem = NULL;
    this->PlatformTokenFetcher = NULL;
}

void UUWESonarSubsystem::UpdateStatus() {
}

void UUWESonarSubsystem::UpdatePlayerEntitlements(TArray<FString> EntitlementIds) {
}

void UUWESonarSubsystem::UnLinkTwitchAccount() {
}

void UUWESonarSubsystem::StartSonarSession() {
}

void UUWESonarSubsystem::RequestTwitchLink() {
}

void UUWESonarSubsystem::RedeemEntitlementCode(const FString& ClaimCode) {
}

bool UUWESonarSubsystem::IsEnabled() {
    return false;
}

void UUWESonarSubsystem::HandlerUserPrivileges(const UCommonUserInfo* UserInfo, ECommonUserPrivilege Privilege, ECommonUserAvailability OldAvailability, ECommonUserAvailability NewAvailability) {
}

void UUWESonarSubsystem::HandlerUserInitialized(const UCommonUserInfo* UserInfo, bool bSuccess, FText Error, ECommonUserPrivilege RequestedPrivilege, ECommonUserOnlineContext OnlineContext) {
}

void UUWESonarSubsystem::HandleEffectiveUserPrivilegeChanged(const UCommonUserInfo* UserInfo, EUWEUserPrivilege Privilege, bool bHasPrivilege) {
}

FString UUWESonarSubsystem::GetCurrentPlayModeString() {
    return TEXT("");
}

EUWEPlayMode UUWESonarSubsystem::GetCurrentPlayMode() {
    return EUWEPlayMode::None;
}

void UUWESonarSubsystem::EndSonarSession(bool bShouldRestart) {
}

void UUWESonarSubsystem::CheckTwitchEntitlements() {
}

void UUWESonarSubsystem::CheckTwitchAccountLink() {
}


