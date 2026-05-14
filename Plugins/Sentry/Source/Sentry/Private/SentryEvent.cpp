#include "SentryEvent.h"

USentryEvent::USentryEvent() {
}

bool USentryEvent::TryGetTag(const FString& Key, FString& Value) const {
    return false;
}

bool USentryEvent::TryGetExtra(const FString& Key, FSentryVariant& Value) const {
    return false;
}

bool USentryEvent::TryGetContext(const FString& Key, TMap<FString, FSentryVariant>& Value) const {
    return false;
}

void USentryEvent::SetTags(const TMap<FString, FString>& Tags) {
}

void USentryEvent::SetTag(const FString& Key, const FString& Value) {
}

void USentryEvent::SetMessage(const FString& Message) {
}

void USentryEvent::SetLevel(ESentryLevel Level) {
}

void USentryEvent::SetFingerprint(const TArray<FString>& Fingerprint) {
}

void USentryEvent::SetExtras(const TMap<FString, FSentryVariant>& Extras) {
}

void USentryEvent::SetExtra(const FString& Key, const FSentryVariant& Value) {
}

void USentryEvent::SetContext(const FString& Key, const TMap<FString, FSentryVariant>& Values) {
}

void USentryEvent::RemoveTag(const FString& Key) {
}

void USentryEvent::RemoveExtra(const FString& Key) {
}

void USentryEvent::RemoveContext(const FString& Key) {
}

bool USentryEvent::IsCrash() const {
    return false;
}

bool USentryEvent::IsAnr() const {
    return false;
}

void USentryEvent::Initialize() {
}

TMap<FString, FString> USentryEvent::GetTags() const {
    return TMap<FString, FString>();
}

FString USentryEvent::GetTag(const FString& Key) const {
    return TEXT("");
}

FString USentryEvent::GetMessage() const {
    return TEXT("");
}

ESentryLevel USentryEvent::GetLevel() const {
    return ESentryLevel::Debug;
}

FString USentryEvent::GetId() const {
    return TEXT("");
}

TArray<FString> USentryEvent::GetFingerprint() const {
    return TArray<FString>();
}

TMap<FString, FSentryVariant> USentryEvent::GetExtras() const {
    return TMap<FString, FSentryVariant>();
}

FSentryVariant USentryEvent::GetExtra(const FString& Key) const {
    return FSentryVariant{};
}

TMap<FString, FSentryVariant> USentryEvent::GetContext(const FString& Key) const {
    return TMap<FString, FSentryVariant>();
}


