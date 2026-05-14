#include "UWENotificationComponent.h"

UUWENotificationComponent::UUWENotificationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxShownNotifications = 1;
}

void UUWENotificationComponent::TryShowNextNotification() {
}

void UUWENotificationComponent::ResendCurrentNotification() {
}

void UUWENotificationComponent::OnHUDNotifyReceivedString(FGameplayTag Channel, const FGameplayMessageString& Message, const int32 SenderPlayerId) {
}

void UUWENotificationComponent::OnHUDNotifyReceived(FGameplayTag Channel, const FGameplayMessageLocalizedNotify& Message, const int32 SenderPlayerId) {
}

int32 UUWENotificationComponent::GetNumShownNotifications() {
    return 0;
}

void UUWENotificationComponent::FinishNotification() {
}

void UUWENotificationComponent::ClientNotify_Implementation(const FNotificationData& Data) {
}

void UUWENotificationComponent::ClearNotifications_Implementation() {
}

bool UUWENotificationComponent::CanShowNextNotification() {
    return false;
}


