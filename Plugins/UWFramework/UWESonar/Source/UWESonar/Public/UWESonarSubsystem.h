#pragma once
#include "CoreMinimal.h"
#include "ECommonUserAvailability.h"
#include "ECommonUserOnlineContext.h"
#include "ECommonUserPrivilege.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "SonarAuthRequest.h"
#include "CodeRedeemCompletedDelegateDelegate.h"
#include "EUWEPlayMode.h"
#include "EUWESonarState.h"
#include "EUWEUserPrivilege.h"
#include "OnTwitchAccountStatusDelegate.h"
#include "OnTwitchLinkRequestedDelegateDelegate.h"
#include "SonarConnectionChangedDelegate.h"
#include "SonarLoginCompletedDelegate.h"
#include "SonarPlayerOnline.h"
#include "TwitchEntitlementRetrievedDelegateDelegate.h"
#include "UWESonarSubsystem.generated.h"

class UCommonUserInfo;
class UUWESonarAPISubsystem;
class UUWESonarPlatformTokenFetcher;
class UUWEUserSubsystem;

UCLASS(BlueprintType, Config=Game)
class UWESONAR_API UUWESonarSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSonarConnectionChanged OnSonarConnectionChanged;
    
    UPROPERTY(BlueprintAssignable)
    FSonarLoginCompleted OnSonarLoginCompleted;
    
    UPROPERTY(BlueprintAssignable)
    FOnTwitchAccountStatus OnTwitchAccountStatus;
    
    UPROPERTY(Config)
    FString UWESonarClientId;
    
    UPROPERTY(Config)
    FString UWESonarClientSecret;
    
    UPROPERTY(BlueprintReadOnly, Config)
    bool bEnableTwitch;
    
    UPROPERTY(Config)
    int32 UWESonarHeartbeatTimeSeconds;
    
    UPROPERTY(Config)
    int32 UWESonarLazyUpdateTimeSeconds;
    
    UPROPERTY(Config)
    float SonarPollTimeSeconds;
    
    UPROPERTY(BlueprintReadOnly, Config)
    int32 UWEMaxConnectedPlayers;
    
    UPROPERTY(Config)
    bool bDebugMode;
    
    UPROPERTY(BlueprintReadOnly)
    bool bInitialized;
    
    UPROPERTY(BlueprintReadOnly)
    bool bInStartup;
    
    UPROPERTY(Config)
    bool bShowAllPlayerGames;
    
    UPROPERTY(BlueprintReadOnly)
    FString SonarPlayerId;
    
    UPROPERTY(BlueprintReadOnly)
    FString PlatformUserId;
    
    UPROPERTY(BlueprintReadOnly)
    FString PlatformProvider;
    
    UPROPERTY()
    FSonarAuthRequest AuthRequest;
    
    UPROPERTY(BlueprintAssignable)
    FCodeRedeemCompletedDelegate OnRedeemCompleted;
    
    UPROPERTY(BlueprintAssignable)
    FTwitchEntitlementRetrievedDelegate OnTwitchEntitlementsRetrieved;
    
    UPROPERTY(BlueprintAssignable)
    FOnTwitchLinkRequestedDelegate OnTwitchLinkRequested;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsTwitchConnected;
    
protected:
    UPROPERTY(BlueprintReadOnly)
    TArray<FSonarPlayerOnline> PlayersOnline;
    
    UPROPERTY(BlueprintReadOnly)
    int32 BuildNumber;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EUWESonarState SonarState;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 JoinGameId;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString JoinGameStatus;
    
private:
    UPROPERTY()
    UUWEUserSubsystem* UserSubsystem;
    
    UPROPERTY()
    UUWESonarAPISubsystem* SonarAPISubsystem;
    
    UPROPERTY()
    UUWESonarPlatformTokenFetcher* PlatformTokenFetcher;
    
public:
    UUWESonarSubsystem();

    UFUNCTION()
    void UpdateStatus();
    
    UFUNCTION(BlueprintCallable)
    void UpdatePlayerEntitlements(TArray<FString> EntitlementIds);
    
    UFUNCTION(BlueprintCallable)
    void UnLinkTwitchAccount();
    
    UFUNCTION()
    void StartSonarSession();
    
    UFUNCTION(BlueprintCallable)
    void RequestTwitchLink();
    
    UFUNCTION(BlueprintCallable)
    void RedeemEntitlementCode(const FString& ClaimCode);
    
    UFUNCTION(BlueprintPure)
    bool IsEnabled();
    
    UFUNCTION()
    void HandlerUserPrivileges(const UCommonUserInfo* UserInfo, ECommonUserPrivilege Privilege, ECommonUserAvailability OldAvailability, ECommonUserAvailability NewAvailability);
    
    UFUNCTION()
    void HandlerUserInitialized(const UCommonUserInfo* UserInfo, bool bSuccess, FText Error, ECommonUserPrivilege RequestedPrivilege, ECommonUserOnlineContext OnlineContext);
    
    UFUNCTION()
    void HandleEffectiveUserPrivilegeChanged(const UCommonUserInfo* UserInfo, EUWEUserPrivilege Privilege, bool bHasPrivilege);
    
    UFUNCTION(BlueprintPure)
    FString GetCurrentPlayModeString();
    
    UFUNCTION(BlueprintPure)
    EUWEPlayMode GetCurrentPlayMode();
    
    UFUNCTION()
    void EndSonarSession(bool bShouldRestart);
    
    UFUNCTION(BlueprintCallable)
    void CheckTwitchEntitlements();
    
    UFUNCTION(BlueprintCallable)
    void CheckTwitchAccountLink();
    
};

