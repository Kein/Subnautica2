#pragma once
#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "EGameModeAliasAsEnum.h"
#include "EUWEFriendType.h"
#include "UWECrossPlatformFriend.h"
#include "SN2FriendEntryViewModel.generated.h"

class APlayerController;
class UTexture2D;

UCLASS()
class SUBNAUTICA2_API USN2FriendEntryViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FText FriendName;
    
    UPROPERTY(BlueprintReadOnly)
    FText PrescenceText;
    
    UPROPERTY(BlueprintReadOnly)
    EUWEFriendType FriendType;
    
    UPROPERTY(BlueprintReadOnly)
    TSoftObjectPtr<UTexture2D> ProfileIcon;
    
    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<APlayerController> PlayerController;
    
    USN2FriendEntryViewModel();

    UFUNCTION(BlueprintCallable)
    void ViewProfile();
    
    UFUNCTION(BlueprintCallable)
    void RemoveFriend();
    
    UFUNCTION(BlueprintCallable)
    bool PopulateFromCrossPlatformFriend(const FUWECrossPlatformFriend& CrossPlatformFriend);
    
    UFUNCTION(BlueprintCallable)
    void Kick();
    
    UFUNCTION(BlueprintCallable)
    void JoinGame();
    
    UFUNCTION(BlueprintPure)
    bool IsInSession() const;
    
    UFUNCTION(BlueprintCallable)
    void InviteFriend();
    
    UFUNCTION(BlueprintPure)
    EGameModeAliasAsEnum GetFriendGameMode() const;
    
    UFUNCTION(BlueprintCallable)
    void DeclineInvite();
    
    UFUNCTION(BlueprintPure)
    bool CanViewProfile() const;
    
    UFUNCTION(BlueprintPure)
    bool CanRemove() const;
    
    UFUNCTION(BlueprintPure)
    bool CanKick() const;
    
    UFUNCTION(BlueprintPure)
    bool CanJoinGame() const;
    
    UFUNCTION(BlueprintPure)
    bool CanInvite() const;
    
    UFUNCTION(BlueprintCallable)
    void AcceptInvite();
    
};

