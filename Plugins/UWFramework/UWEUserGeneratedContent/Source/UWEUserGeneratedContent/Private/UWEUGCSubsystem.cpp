#include "UWEUGCSubsystem.h"

UUWEUGCSubsystem::UUWEUGCSubsystem() {
    this->BannedWords.AddDefaulted(852);
    this->bProfanityFilterEnabled = true;
    this->bUGCDisabled = false;
}

void UUWEUGCSubsystem::SetUGCDisabled(bool bNewDisabled) {
}

void UUWEUGCSubsystem::SetProfanityFilterEnabled(bool bEnabled) {
}

bool UUWEUGCSubsystem::IsUGCDisabled() const {
    return false;
}

bool UUWEUGCSubsystem::IsProfanityFilterEnabled() const {
    return false;
}

FText UUWEUGCSubsystem::FilterUGCText(FText InText, FText FallbackText) {
    return FText::GetEmpty();
}


