#include "UWEBuildInfo.h"

UUWEBuildInfo::UUWEBuildInfo() {
}

bool UUWEBuildInfo::IsSkipBoot() {
    return false;
}

bool UUWEBuildInfo::IsPlaytestBuild() {
    return false;
}

bool UUWEBuildInfo::IsFinalShippingBuild() {
    return false;
}

bool UUWEBuildInfo::IsDevelopmentBuild() {
    return false;
}

FString UUWEBuildInfo::GetProjectVersion() {
    return TEXT("");
}

int32 UUWEBuildInfo::GetNetworkBuildNumber() {
    return 0;
}

FString UUWEBuildInfo::GetFullProjectVersionString() {
    return TEXT("");
}

int32 UUWEBuildInfo::GetBuildNumber() {
    return 0;
}

FText UUWEBuildInfo::GetBuildInfoText() {
    return FText::GetEmpty();
}

FString UUWEBuildInfo::GetBuildBranchName() {
    return TEXT("");
}


