#pragma once
#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "UWEMultiplayerHostedSessionViewModel.generated.h"

UCLASS()
class UWESONAR_API UUWEMultiplayerHostedSessionViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FString ServerName;
    
    UPROPERTY(BlueprintReadWrite)
    FString MapName;
    
    UPROPERTY(BlueprintReadWrite)
    bool InviteOnly;
    
    UPROPERTY(BlueprintReadWrite)
    FString HostedGameMode;
    
    UPROPERTY(BlueprintReadWrite)
    FString SaveSlot;
    
    UPROPERTY(BlueprintReadWrite)
    FString SaveCheckpoint;
    
    UPROPERTY(BlueprintReadWrite)
    FString InviteCode;
    
    UPROPERTY(BlueprintReadWrite)
    FText ErrorText;
    
    UUWEMultiplayerHostedSessionViewModel();

    UFUNCTION(BlueprintCallable)
    void TriggerHostGameRequest();
    
    UFUNCTION(BlueprintCallable)
    void SetInviteOnly(bool NewInviteOnly);
    
    UFUNCTION(BlueprintCallable)
    void SetErrorText(FText Error);
    
};

