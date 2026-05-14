#include "SN2FriendScreenViewModel.h"

USN2FriendScreenViewModel::USN2FriendScreenViewModel() {
    this->FriendCode = TEXT(" ");
    this->IsReadyToGenerate = true;
}

void USN2FriendScreenViewModel::RequestFriendCode() {
}

void USN2FriendScreenViewModel::RequestAddFriend(const FString& InpFriendCode) {
}

void USN2FriendScreenViewModel::OnFriendCodeReturned(bool Success, const FString& ErrorStr, const FString& NewFriendCode) {
}

bool USN2FriendScreenViewModel::IsInviteOnly() const {
    return false;
}

void USN2FriendScreenViewModel::InitFriendCode() {
}

bool USN2FriendScreenViewModel::HasRequestedAFriendCode() const {
    return false;
}

void USN2FriendScreenViewModel::CopyFriendCodeToClipboard() {
}

void USN2FriendScreenViewModel::CleanUpFriendCode() {
}


