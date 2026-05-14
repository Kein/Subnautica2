#pragma once
#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "UWEOnFriendCodeGeneratedDelegate.h"
#include "SN2FriendScreenViewModel.generated.h"

UCLASS()
class SUBNAUTICA2_API USN2FriendScreenViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString FriendCode;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool IsReadyToGenerate;
    
    UPROPERTY()
    FUWEOnFriendCodeGenerated CompleteDelegate;
    
public:
    USN2FriendScreenViewModel();

    UFUNCTION(BlueprintCallable)
    void RequestFriendCode();
    
    UFUNCTION(BlueprintCallable)
    void RequestAddFriend(const FString& InpFriendCode);
    
    UFUNCTION()
    void OnFriendCodeReturned(bool Success, const FString& ErrorStr, const FString& NewFriendCode);
    
    UFUNCTION(BlueprintPure)
    bool IsInviteOnly() const;
    
    UFUNCTION(BlueprintCallable)
    void InitFriendCode();
    
    UFUNCTION(BlueprintPure)
    bool HasRequestedAFriendCode() const;
    
    UFUNCTION(BlueprintCallable)
    void CopyFriendCodeToClipboard();
    
    UFUNCTION(BlueprintCallable)
    void CleanUpFriendCode();
    
};

