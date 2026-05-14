#include "SentrySubsystem.h"

USentrySubsystem::USentrySubsystem() {
    this->BeforeSendHandler = NULL;
    this->BeforeBreadcrumbHandler = NULL;
    this->TraceSampler = NULL;
}

USentryTransaction* USentrySubsystem::StartTransactionWithContextAndTimestamp(USentryTransactionContext* Context, int64 Timestamp, bool BindToScope) {
    return NULL;
}

USentryTransaction* USentrySubsystem::StartTransactionWithContextAndOptions(USentryTransactionContext* Context, const FSentryTransactionOptions& Options) {
    return NULL;
}

USentryTransaction* USentrySubsystem::StartTransactionWithContext(USentryTransactionContext* Context, bool BindToScope) {
    return NULL;
}

USentryTransaction* USentrySubsystem::StartTransaction(const FString& Name, const FString& Operation, bool BindToScope) {
    return NULL;
}

void USentrySubsystem::StartSession() {
}

void USentrySubsystem::SetUser(USentryUser* User) {
}

void USentrySubsystem::SetTag(const FString& Key, const FString& Value) {
}

void USentrySubsystem::SetLevel(ESentryLevel Level) {
}

void USentrySubsystem::SetContext(const FString& Key, const TMap<FString, FSentryVariant>& Values) {
}

void USentrySubsystem::RevokeUserConsent() {
}

void USentrySubsystem::RemoveUser() {
}

void USentrySubsystem::RemoveTag(const FString& Key) {
}

bool USentrySubsystem::IsSupportedForCurrentSettings() const {
    return false;
}

bool USentrySubsystem::IsEnabled() const {
    return false;
}

ESentryCrashedLastRun USentrySubsystem::IsCrashedLastRun() const {
    return ESentryCrashedLastRun::NotEvaluated;
}

void USentrySubsystem::InitializeWithSettings(const FConfigureSettingsDelegate& OnConfigureSettings) {
}

void USentrySubsystem::Initialize() {
}

void USentrySubsystem::GiveUserConsent() {
}

EUserConsent USentrySubsystem::GetUserConsent() const {
    return EUserConsent::Revoked;
}

void USentrySubsystem::EndSession() {
}

USentryTransactionContext* USentrySubsystem::ContinueTrace(const FString& SentryTrace, const TArray<FString>& BaggageHeaders) {
    return NULL;
}

void USentrySubsystem::Close() {
}

void USentrySubsystem::ClearBreadcrumbs() {
}

void USentrySubsystem::ClearAttachments() {
}

FString USentrySubsystem::CaptureMessageWithScope(const FString& Message, const FConfigureScopeDelegate& OnConfigureScope, ESentryLevel Level) {
    return TEXT("");
}

FString USentrySubsystem::CaptureMessage(const FString& Message, ESentryLevel Level) {
    return TEXT("");
}

void USentrySubsystem::CaptureFeedbackWithParams(const FString& Message, const FString& Name, const FString& Email, const FString& EventID) {
}

void USentrySubsystem::CaptureFeedback(USentryFeedback* Feedback) {
}

FString USentrySubsystem::CaptureEventWithScope(USentryEvent* Event, const FConfigureScopeDelegate& OnConfigureScope) {
    return TEXT("");
}

FString USentrySubsystem::CaptureEvent(USentryEvent* Event) {
    return TEXT("");
}

void USentrySubsystem::AddBreadcrumbWithParams(const FString& Message, const FString& Category, const FString& Type, const TMap<FString, FSentryVariant>& Data, ESentryLevel Level) {
}

void USentrySubsystem::AddBreadcrumb(USentryBreadcrumb* Breadcrumb) {
}

void USentrySubsystem::AddAttachment(USentryAttachment* Attachment) {
}


