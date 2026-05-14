#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "GameplayMessageLocalizedNotify.h"
#include "GameplayMessageString.h"
#include "NotificationData.h"
#include "UWENotificationComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWENOTIFICATIONS_API UUWENotificationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MaxShownNotifications;
    
    UUWENotificationComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void TryShowNextNotification();
    
    UFUNCTION()
    void ResendCurrentNotification();
    
    UFUNCTION()
    void OnHUDNotifyReceivedString(FGameplayTag Channel, const FGameplayMessageString& Message, const int32 SenderPlayerId);
    
    UFUNCTION()
    void OnHUDNotifyReceived(FGameplayTag Channel, const FGameplayMessageLocalizedNotify& Message, const int32 SenderPlayerId);
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumShownNotifications();
    
    UFUNCTION()
    void FinishNotification();
    
    UFUNCTION(Client, Reliable)
    void ClientNotify(const FNotificationData& Data);
    
    UFUNCTION(Client, Reliable)
    void ClearNotifications();
    
protected:
    UFUNCTION()
    bool CanShowNextNotification();
    
};

