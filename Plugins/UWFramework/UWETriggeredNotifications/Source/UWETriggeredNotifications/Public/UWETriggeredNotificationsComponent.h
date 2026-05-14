#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UWEEventKey.h"
#include "Templates/SubclassOf.h"
#include "UWETriggeredNotificationsComponent.generated.h"

class AActor;
class APawn;
class APlayerController;
class APlayerState;
class UObject;
class UUWEStoryGoal;
class UUWEStoryGoalsWorldSubsystem;
class UUWETriggeredNotificationData;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWETRIGGEREDNOTIFICATIONS_API UUWETriggeredNotificationsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnShowHUDTriggeredNotification, UObject*, WorldContext, UUWETriggeredNotificationData*, NotificationData);
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AActor> TriggeredNotificationOverActorClass;
    
    UPROPERTY(BlueprintAssignable)
    FOnShowHUDTriggeredNotification OnShowHUDTriggeredNotification;
    
private:
    UPROPERTY()
    TArray<UUWETriggeredNotificationData*> AllTriggeredNotifications;
    
    UPROPERTY()
    TArray<UUWETriggeredNotificationData*> GameplayMessageTriggeredNotifications;
    
    UPROPERTY()
    TArray<UUWETriggeredNotificationData*> HUDTriggeredNotifications;
    
    UPROPERTY()
    TArray<UUWETriggeredNotificationData*> OverActorTriggeredNotifications;
    
    UPROPERTY()
    UUWEStoryGoalsWorldSubsystem* WorldStoryGoalsSubsystem;
    
    UPROPERTY()
    APlayerController* PlayerController;
    
    UPROPERTY()
    APawn* PlayerPawn;
    
    UPROPERTY()
    APlayerState* OwningPlayerState;
    
public:
    UUWETriggeredNotificationsComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void TriggerTriggeredNotification(TSoftObjectPtr<UUWETriggeredNotificationData> TriggeredNotificationData);
    
    UFUNCTION()
    void OnStoryGoalUnlocked(UUWEStoryGoal* UnlockedStoryGoal, AActor* ReceivingActor);
    
    UFUNCTION()
    void OnPawnSet(APlayerState* PlayerState, APawn* NewPawn, APawn* OldPawn);
    
    UFUNCTION()
    void OnPawnChanged(APawn* OldPawn, APawn* NewPawn);
    
    UFUNCTION()
    void OnEventTrackerTriggerEventAsset(FUWEEventKey EventKey, int32 OldValue, int32 NewValue);
    
    UFUNCTION()
    void OnEventTrackerTriggerEvent(FUWEEventKey EventKey, int32 OldValue, int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void ManuallyTriggerTriggeredNotification(TSoftObjectPtr<UUWETriggeredNotificationData> TriggeredNotificationData);
    
    UFUNCTION()
    void HandleStoryGoalTriggeredNotifications(TArray<UUWETriggeredNotificationData*> TriggeredNotifications, UUWEStoryGoal* UnlockedStoryGoal);
    
    UFUNCTION()
    void HandleEventTrackerTriggeredNotifications(TArray<UUWETriggeredNotificationData*> TriggeredNotifications, FUWEEventKey EventKey, int32 OldValue, int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void GatherAndSetupTriggeredNotifications();
    
private:
    UFUNCTION()
    void BindEvents();
    
public:
    UFUNCTION()
    bool AreRemovalCriteriaMet(UUWETriggeredNotificationData* TriggeredNotification);
    
};

