#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "UWENotificationSettings.generated.h"

class UModalActivatableWidget;

UCLASS(DefaultConfig, Config=Game)
class UWENOTIFICATIONS_API UUWENotificationSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FGameplayTagContainer RequiredTagsForPlayingNotifications;
    
    UPROPERTY(Config, EditAnywhere)
    FGameplayTagContainer BlockedTagsForPlayingNotifications;
    
    UPROPERTY(Config, EditAnywhere)
    TSubclassOf<UModalActivatableWidget> MessageBoxWidgetClass;
    
    UUWENotificationSettings();

};

