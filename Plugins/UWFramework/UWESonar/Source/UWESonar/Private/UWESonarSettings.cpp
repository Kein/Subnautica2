#include "UWESonarSettings.h"

UUWESonarSettings::UUWESonarSettings() {
    this->ProfileImages.AddDefaulted(14);
    this->SonarFriendsListRefreshDelay = 30.00f;
    this->PlatformFriendsListRefreshDelay = 60.00f;
    this->SessionPlayersListRefreshDelay = 1.00f;
    this->HostedFriendInvitePollIntervalSeconds = 60.00f;
}


