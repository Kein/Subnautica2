#pragma once
#include "CoreMinimal.h"
#include "CommonSessionSubsystem.h"
#include "UWEOnlineSessionSubsystem.generated.h"

class APlayerController;
class UUWESearchSessionResult;

UCLASS(Config=Game)
class UWESONAR_API UUWEOnlineSessionSubsystem : public UCommonSessionSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UUWESearchSessionResult* PendingInvite;
    
    UPROPERTY()
    UUWESearchSessionResult* InProgressJoin;
    
    UPROPERTY(Config)
    bool bUsePresenceDefault;
    
    UPROPERTY(Config)
    int32 MaxSessionPlayerCount;
    
    UPROPERTY(Config)
    bool bShouldAdvertiseSessions;
    
public:
    UUWEOnlineSessionSubsystem();

    UFUNCTION(BlueprintCallable)
    void HostSessionAsync(APlayerController* HostingPlayerController, bool AllowAllFriends, const FString& GameModeAlias, const FString& ServerName, const FString& SaveSlot, const FString& SaveCheckpoint);
    
};

