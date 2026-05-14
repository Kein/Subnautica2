#include "UWETriggeredNotificationsComponent.h"

UUWETriggeredNotificationsComponent::UUWETriggeredNotificationsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TriggeredNotificationOverActorClass = NULL;
    this->WorldStoryGoalsSubsystem = NULL;
    this->PlayerController = NULL;
    this->PlayerPawn = NULL;
    this->OwningPlayerState = NULL;
}

void UUWETriggeredNotificationsComponent::TriggerTriggeredNotification(TSoftObjectPtr<UUWETriggeredNotificationData> TriggeredNotificationData) {
}

void UUWETriggeredNotificationsComponent::OnStoryGoalUnlocked(UUWEStoryGoal* UnlockedStoryGoal, AActor* ReceivingActor) {
}

void UUWETriggeredNotificationsComponent::OnPawnSet(APlayerState* PlayerState, APawn* NewPawn, APawn* OldPawn) {
}

void UUWETriggeredNotificationsComponent::OnPawnChanged(APawn* OldPawn, APawn* NewPawn) {
}

void UUWETriggeredNotificationsComponent::OnEventTrackerTriggerEventAsset(FUWEEventKey EventKey, int32 OldValue, int32 NewValue) {
}

void UUWETriggeredNotificationsComponent::OnEventTrackerTriggerEvent(FUWEEventKey EventKey, int32 OldValue, int32 NewValue) {
}

void UUWETriggeredNotificationsComponent::ManuallyTriggerTriggeredNotification(TSoftObjectPtr<UUWETriggeredNotificationData> TriggeredNotificationData) {
}

void UUWETriggeredNotificationsComponent::HandleStoryGoalTriggeredNotifications(TArray<UUWETriggeredNotificationData*> TriggeredNotifications, UUWEStoryGoal* UnlockedStoryGoal) {
}

void UUWETriggeredNotificationsComponent::HandleEventTrackerTriggeredNotifications(TArray<UUWETriggeredNotificationData*> TriggeredNotifications, FUWEEventKey EventKey, int32 OldValue, int32 NewValue) {
}

void UUWETriggeredNotificationsComponent::GatherAndSetupTriggeredNotifications() {
}

void UUWETriggeredNotificationsComponent::BindEvents() {
}

bool UUWETriggeredNotificationsComponent::AreRemovalCriteriaMet(UUWETriggeredNotificationData* TriggeredNotification) {
    return false;
}


