#include "UWEEventSubsystem.h"

UUWEEventSubsystem::UUWEEventSubsystem() {
    this->EventHistoryLen = 100;
    this->bEnabled = false;
    this->MaxAlternativeEvents = 100;
    this->bGPPDisabled = false;
}

void UUWEEventSubsystem::SetEnabled(bool InbEnabled) {
}

bool UUWEEventSubsystem::IsEnabled() {
    return false;
}

void UUWEEventSubsystem::Init() {
}

void UUWEEventSubsystem::FlushEventsAlternative() {
}

void UUWEEventSubsystem::BPRecordEvent(const FString& EventName, AActor* Player, const bool bVerbose, const TArray<FAnalyticsEventAttr>& Attributes) {
}


