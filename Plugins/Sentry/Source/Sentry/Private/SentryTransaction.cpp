#include "SentryTransaction.h"

USentryTransaction::USentryTransaction() {
}

USentrySpan* USentryTransaction::StartChildSpanWithTimestamp(const FString& Operation, const FString& Description, int64 Timestamp, bool BindToScope) {
    return NULL;
}

USentrySpan* USentryTransaction::StartChildSpan(const FString& Operation, const FString& Description, bool BindToScope) {
    return NULL;
}

void USentryTransaction::SetTag(const FString& Key, const FString& Value) {
}

void USentryTransaction::SetName(const FString& Name) {
}

void USentryTransaction::SetData(const FString& Key, const TMap<FString, FSentryVariant>& Values) {
}

void USentryTransaction::RemoveTag(const FString& Key) {
}

void USentryTransaction::RemoveData(const FString& Key) {
}

bool USentryTransaction::IsFinished() const {
    return false;
}

void USentryTransaction::GetTrace(FString& Name, FString& Value) {
}

void USentryTransaction::FinishWithTimestamp(int64 Timestamp) {
}

void USentryTransaction::Finish() {
}


