#include "UWENotificationSystemViewModel.h"

UUWENotificationSystemViewModel::UUWENotificationSystemViewModel() {
    this->HasReasonToHide = false;
    this->NotificationComponent = NULL;
    this->CriticalErrorMode = false;
}

void UUWENotificationSystemViewModel::ShowNotification(const FNotificationData& Data) {
}

void UUWENotificationSystemViewModel::SetCriticalErrorMode(bool Enabled) {
}

void UUWENotificationSystemViewModel::RemoveReasonToHide(const FString& Reason) {
}

void UUWENotificationSystemViewModel::OnNotificationStarted(const FNotificationData& NotificationData) {
}

void UUWENotificationSystemViewModel::OnNotificationCleared() {
}

void UUWENotificationSystemViewModel::Initialize(UObject* WorldContext) {
}

void UUWENotificationSystemViewModel::FinishNotification() {
}

void UUWENotificationSystemViewModel::ClearPendingNotifications() {
}

void UUWENotificationSystemViewModel::AddReasonToHide(const FString& Reason) {
}


