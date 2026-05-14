#include "SentryBreadcrumb.h"

USentryBreadcrumb::USentryBreadcrumb() {
}

void USentryBreadcrumb::SetType(const FString& Type) {
}

void USentryBreadcrumb::SetMessage(const FString& Message) {
}

void USentryBreadcrumb::SetLevel(ESentryLevel Level) {
}

void USentryBreadcrumb::SetData(const TMap<FString, FSentryVariant>& Data) {
}

void USentryBreadcrumb::SetCategory(const FString& Category) {
}

void USentryBreadcrumb::Initialize() {
}

FString USentryBreadcrumb::GetType() const {
    return TEXT("");
}

FString USentryBreadcrumb::GetMessage() const {
    return TEXT("");
}

ESentryLevel USentryBreadcrumb::GetLevel() const {
    return ESentryLevel::Debug;
}

TMap<FString, FSentryVariant> USentryBreadcrumb::GetData() const {
    return TMap<FString, FSentryVariant>();
}

FString USentryBreadcrumb::GetCategory() const {
    return TEXT("");
}


