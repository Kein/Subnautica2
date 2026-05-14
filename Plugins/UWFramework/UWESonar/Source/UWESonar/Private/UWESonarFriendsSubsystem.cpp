#include "UWESonarFriendsSubsystem.h"
#include "Templates/SubclassOf.h"

UUWESonarFriendsSubsystem::UUWESonarFriendsSubsystem() {
    this->Context = NULL;
}

void UUWESonarFriendsSubsystem::RequestCrossPlatformFriends(bool FromUserInput) {
}

void UUWESonarFriendsSubsystem::OnWidgetPopped(TEnumAsByte<EUWEWindowManagerLayer> LayerId, bool IsLast, TSubclassOf<UCommonActivatableWidget> WidgetClas) {
}

void UUWESonarFriendsSubsystem::OnInviteScreenDecline() {
}

void UUWESonarFriendsSubsystem::OnInviteScreenAccept() {
}

void UUWESonarFriendsSubsystem::NotifyOnExitGame() {
}

bool UUWESonarFriendsSubsystem::HasCrossPlatformPrivileges() {
    return false;
}

TSoftObjectPtr<UTexture2D> UUWESonarFriendsSubsystem::GetPlatformLogo() {
    return NULL;
}

int32 UUWESonarFriendsSubsystem::GetPendingNewIncomingInviteCount() const {
    return 0;
}

int32 UUWESonarFriendsSubsystem::ConsumePendingNewIncomingInviteCount() {
    return 0;
}


