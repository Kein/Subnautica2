#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "CommonSessionOnCreateSessionComplete_DynamicDelegate.h"
#include "CommonSessionOnDestroySessionRequested_DynamicDelegate.h"
#include "CommonSessionOnJoinSessionComplete_DynamicDelegate.h"
#include "CommonSessionOnSessionInformationChanged_DynamicDelegate.h"
#include "CommonSessionOnUserRequestedSession_DynamicDelegate.h"
#include "CommonSessionSubsystem.generated.h"

class AOnlineBeaconHost;
class APartyBeaconClient;
class APartyBeaconHost;
class APlayerController;
class UCommonSession_HostSessionRequest;
class UCommonSession_SearchResult;
class UCommonSession_SearchSessionRequest;
class UPartyBeaconState;

UCLASS(BlueprintType, Config=Engine)
class COMMONUSER_API UCommonSessionSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FCommonSessionOnUserRequestedSession_Dynamic K2_OnUserRequestedSessionEvent;
    
    UPROPERTY(BlueprintAssignable)
    FCommonSessionOnJoinSessionComplete_Dynamic K2_OnJoinSessionCompleteEvent;
    
    UPROPERTY(BlueprintAssignable)
    FCommonSessionOnCreateSessionComplete_Dynamic K2_OnCreateSessionCompleteEvent;
    
    UPROPERTY(BlueprintAssignable)
    FCommonSessionOnSessionInformationChanged_Dynamic K2_OnSessionInformationChangedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FCommonSessionOnDestroySessionRequested_Dynamic K2_OnDestroySessionRequestedEvent;
    
    UPROPERTY(Config)
    bool bUseLobbiesDefault;
    
    UPROPERTY(Config)
    bool bUseLobbiesVoiceChatDefault;
    
    UPROPERTY(Config)
    bool bUseBeacons;
    
protected:
    UPROPERTY(Transient)
    TWeakObjectPtr<AOnlineBeaconHost> BeaconHostListener;
    
    UPROPERTY(Transient)
    UPartyBeaconState* ReservationBeaconHostState;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<APartyBeaconHost> ReservationBeaconHost;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<APartyBeaconClient> ReservationBeaconClient;
    
    UPROPERTY(Config)
    int32 BeaconTeamCount;
    
    UPROPERTY(Config)
    int32 BeaconTeamSize;
    
    UPROPERTY(Config)
    int32 BeaconMaxReservations;
    
public:
    UCommonSessionSubsystem();

    UFUNCTION(BlueprintCallable)
    void QuickPlaySession(APlayerController* JoiningOrHostingPlayer, UCommonSession_HostSessionRequest* Request);
    
    UFUNCTION(BlueprintCallable)
    void JoinSession(APlayerController* JoiningPlayer, UCommonSession_SearchResult* Request);
    
    UFUNCTION(BlueprintCallable)
    void HostSession(APlayerController* HostingPlayer, UCommonSession_HostSessionRequest* Request);
    
    UFUNCTION(BlueprintCallable)
    void FindSessions(APlayerController* SearchingPlayer, UCommonSession_SearchSessionRequest* Request);
    
    UFUNCTION(BlueprintCallable)
    UCommonSession_SearchSessionRequest* CreateOnlineSearchSessionRequest();
    
    UFUNCTION(BlueprintCallable)
    UCommonSession_HostSessionRequest* CreateOnlineHostSessionRequest();
    
    UFUNCTION(BlueprintCallable)
    void CleanUpSessions();
    
};

