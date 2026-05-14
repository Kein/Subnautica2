#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "UWESonarSettings.generated.h"

class UModalActivatableWidget;
class UTexture2D;

UCLASS(DefaultConfig, Config=Game)
class UWESONAR_API UUWESonarSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TArray<TSoftObjectPtr<UTexture2D>> ProfileImages;
    
    UPROPERTY(Config, EditAnywhere)
    TMap<FString, TSoftObjectPtr<UTexture2D>> PlatformProfileImages;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<UModalActivatableWidget> FriendInviteWidget;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<UModalActivatableWidget> SaveAndExitWidget;
    
    UPROPERTY(Config, EditAnywhere)
    float SonarFriendsListRefreshDelay;
    
    UPROPERTY(Config, EditAnywhere)
    float PlatformFriendsListRefreshDelay;
    
    UPROPERTY(Config, EditAnywhere)
    float SessionPlayersListRefreshDelay;
    
    UPROPERTY(Config, EditAnywhere)
    float HostedFriendInvitePollIntervalSeconds;
    
    UUWESonarSettings();

};

