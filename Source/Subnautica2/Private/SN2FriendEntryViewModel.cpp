#include "SN2FriendEntryViewModel.h"

USN2FriendEntryViewModel::USN2FriendEntryViewModel() {
    this->FriendType = EUWEFriendType::NonPlatformFriend;
}

void USN2FriendEntryViewModel::ViewProfile() {
}

void USN2FriendEntryViewModel::RemoveFriend() {
}

bool USN2FriendEntryViewModel::PopulateFromCrossPlatformFriend(const FUWECrossPlatformFriend& CrossPlatformFriend) {
    return false;
}

void USN2FriendEntryViewModel::Kick() {
}

void USN2FriendEntryViewModel::JoinGame() {
}

bool USN2FriendEntryViewModel::IsInSession() const {
    return false;
}

void USN2FriendEntryViewModel::InviteFriend() {
}

EGameModeAliasAsEnum USN2FriendEntryViewModel::GetFriendGameMode() const {
    return EGameModeAliasAsEnum::None;
}

void USN2FriendEntryViewModel::DeclineInvite() {
}

bool USN2FriendEntryViewModel::CanViewProfile() const {
    return false;
}

bool USN2FriendEntryViewModel::CanRemove() const {
    return false;
}

bool USN2FriendEntryViewModel::CanKick() const {
    return false;
}

bool USN2FriendEntryViewModel::CanJoinGame() const {
    return false;
}

bool USN2FriendEntryViewModel::CanInvite() const {
    return false;
}

void USN2FriendEntryViewModel::AcceptInvite() {
}


