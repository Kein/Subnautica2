#include "UWECrashReporterStatics.h"

UUWECrashReporterStatics::UUWECrashReporterStatics() {
}

bool UUWECrashReporterStatics::WasLastLobbyNotReached() {
    return false;
}

bool UUWECrashReporterStatics::WasLastExitUnclean() {
    return false;
}

void UUWECrashReporterStatics::SendEvent(const FString& Message) {
}

void UUWECrashReporterStatics::NotifyLobbyReached() {
}


