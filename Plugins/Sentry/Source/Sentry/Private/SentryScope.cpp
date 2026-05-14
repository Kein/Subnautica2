#include "SentryScope.h"

USentryScope::USentryScope() {
}

bool USentryScope::TryGetTag(const FString& Key, FString& Value) const {
    return false;
}

bool USentryScope::TryGetExtra(const FString& Key, FSentryVariant& Value) const {
    return false;
}

bool USentryScope::TryGetContext(const FString& Key, TMap<FString, FSentryVariant>& Value) const {
    return false;
}

void USentryScope::SetTags(const TMap<FString, FString>& Tags) {
}

void USentryScope::SetTag(const FString& Key, const FString& Value) {
}

void USentryScope::SetLevel(ESentryLevel Level) {
}

void USentryScope::SetFingerprint(const TArray<FString>& Fingerprint) {
}

void USentryScope::SetExtras(const TMap<FString, FSentryVariant>& Extras) {
}

void USentryScope::SetExtra(const FString& Key, const FSentryVariant& Value) {
}

void USentryScope::SetContext(const FString& Key, const TMap<FString, FSentryVariant>& Values) {
}

void USentryScope::RemoveTag(const FString& Key) {
}

void USentryScope::RemoveExtra(const FString& Key) {
}

void USentryScope::RemoveContext(const FString& Key) {
}

void USentryScope::Initialize() {
}

TMap<FString, FString> USentryScope::GetTags() const {
    return TMap<FString, FString>();
}

FString USentryScope::GetTag(const FString& Key) const {
    return TEXT("");
}

ESentryLevel USentryScope::GetLevel() const {
    return ESentryLevel::Debug;
}

TArray<FString> USentryScope::GetFingerprint() const {
    return TArray<FString>();
}

TMap<FString, FSentryVariant> USentryScope::GetExtras() const {
    return TMap<FString, FSentryVariant>();
}

FSentryVariant USentryScope::GetExtra(const FString& Key) const {
    return FSentryVariant{};
}

TMap<FString, FSentryVariant> USentryScope::GetContext(const FString& Key) const {
    return TMap<FString, FSentryVariant>();
}

void USentryScope::ClearBreadcrumbs() {
}

void USentryScope::ClearAttachments() {
}

void USentryScope::Clear() {
}

void USentryScope::AddBreadcrumb(USentryBreadcrumb* Breadcrumb) {
}

void USentryScope::AddAttachment(USentryAttachment* Attachment) {
}


