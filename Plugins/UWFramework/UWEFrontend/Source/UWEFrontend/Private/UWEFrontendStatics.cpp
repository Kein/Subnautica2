#include "UWEFrontendStatics.h"

UUWEFrontendStatics::UUWEFrontendStatics() {
}

bool UUWEFrontendStatics::ShouldHoldForShaderPrecompilation() {
    return false;
}

void UUWEFrontendStatics::ReturnToFrontendByName(const UObject* WorldContextObject, const FName& FrontendLevelName, EUWEFrontendMenuReturnReason ReturnReason) {
}

void UUWEFrontendStatics::ReturnToFrontend(const UObject* WorldContextObject, TSoftObjectPtr<UWorld> FrontendLevel, EUWEFrontendMenuReturnReason ReturnReason) {
}

void UUWEFrontendStatics::PrintCacheStats(const UObject* WorldContextObject) {
}

bool UUWEFrontendStatics::IsFirstTimeBoot() {
    return false;
}

FUWEShaderCacheStatistics UUWEFrontendStatics::GetShaderCacheStatistics() {
    return FUWEShaderCacheStatistics{};
}

FText UUWEFrontendStatics::GetPrivilegeErrorText(ECommonUserPrivilegeResult UserPrivilege) {
    return FText::GetEmpty();
}

int32 UUWEFrontendStatics::GetNumberOfShaderPrecompilesRemaining() {
    return 0;
}

bool UUWEFrontendStatics::DoUserPrivilegeCheck(UObject* WorldContextObject, const FPlatformUserId& PlatformUserId, EUWEUserPrivilege UserPrivilege, FText& ErrorMessage, bool bShowErrorMessage, bool bShowResolveUI) {
    return false;
}

bool UUWEFrontendStatics::DoesSwitchExistOnCommandLine(const FString& Switch) {
    return false;
}


