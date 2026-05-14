#include "UWEUserSubsystem.h"

UUWEUserSubsystem::UUWEUserSubsystem() {
    this->SonarSubsystem = NULL;
}

bool UUWEUserSubsystem::HasLoggedInLocalUser() const {
    return false;
}

void UUWEUserSubsystem::HandleUserPrivilegeChanged(const UCommonUserInfo* UserInfo, ECommonUserPrivilege Privilege, ECommonUserAvailability OldAvailability, ECommonUserAvailability NewAvailability) {
}

ECommonUserPrivilegeResult UUWEUserSubsystem::GetUserPrivilegeResult(const FPlatformUserId& PlatformUserId, EUWEUserPrivilege Privilege, bool bShowResolveUIOnFailure) {
    return ECommonUserPrivilegeResult::Unknown;
}

UCommonUserInfo* UUWEUserSubsystem::GetFirstLoggedInUserInfo() const {
    return NULL;
}

bool UUWEUserSubsystem::CanSwitchPlatformUser() const {
    return false;
}


