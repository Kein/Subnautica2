#include "UWECrossPlatformFriend.h"

FUWECrossPlatformFriend::FUWECrossPlatformFriend() {
    this->IsJoinable = false;
    this->IsPlaying = false;
    this->IsOnline = false;
    this->FriendType = EUWEFriendType::SessionPlayer;
    this->Mode = EUWEFriendMode::Lobby;
    this->NetMode = EUWEFriendNetMode::Standalone;
    this->GameMode = EGameModeAliasAsEnum::None;
}

