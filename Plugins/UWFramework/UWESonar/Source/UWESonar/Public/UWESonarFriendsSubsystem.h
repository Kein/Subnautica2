#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EUWEWindowManagerLayer.h"
#include "Templates/SubclassOf.h"
#include "UWECrossPlatformFriend.h"
#include "UWEOnCrossPlatformFriendsCompleteDelegate.h"
#include "UWESonarFriendsSubsystem.generated.h"

class UCommonActivatableWidget;
class UTexture2D;
class UUWEFriendInviteContext;

UCLASS(BlueprintType)
class UWESONAR_API UUWESonarFriendsSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY()
    FUWEOnCrossPlatformFriendsComplete CompleteDelegate;
    
private:
    UPROPERTY()
    TArray<FUWECrossPlatformFriend> SonarCrossPlatformFriends;
    
    UPROPERTY()
    TArray<FUWECrossPlatformFriend> PlatformFriendsArray;
    
    UPROPERTY()
    TArray<FUWECrossPlatformFriend> SessionFriends;
    
    UPROPERTY()
    TArray<FUWECrossPlatformFriend> CachedTestFriends;
    
    UPROPERTY()
    UUWEFriendInviteContext* Context;
    
public:
    UUWESonarFriendsSubsystem();

    UFUNCTION(BlueprintCallable)
    void RequestCrossPlatformFriends(bool FromUserInput);
    
protected:
    UFUNCTION()
    void OnWidgetPopped(TEnumAsByte<EUWEWindowManagerLayer> LayerId, bool IsLast, TSubclassOf<UCommonActivatableWidget> WidgetClas);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnInviteScreenDecline();
    
    UFUNCTION(BlueprintCallable)
    void OnInviteScreenAccept();
    
    UFUNCTION(BlueprintCallable)
    void NotifyOnExitGame();
    
    UFUNCTION(BlueprintCallable)
    bool HasCrossPlatformPrivileges();
    
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<UTexture2D> GetPlatformLogo();
    
    UFUNCTION(BlueprintPure)
    int32 GetPendingNewIncomingInviteCount() const;
    
    UFUNCTION(BlueprintCallable)
    int32 ConsumePendingNewIncomingInviteCount();
    
};

