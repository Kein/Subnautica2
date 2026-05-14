#pragma once
#include "CoreMinimal.h"
#include "Components/GameFrameworkComponent.h"
#include "EUWESaveGameCollectionIndex.h"
#include "UWESaveGameCollectionInfo.h"
#include "UWESlotInfoSimple.h"
#include "UWESaveCommunicationComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWESAVESYSTEM_API UUWESaveCommunicationComponent : public UGameFrameworkComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSaveCommunicationDelegateWithResult, bool, Result);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSaveCommunicationDelegate);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FIsSavingBlockedDelegate, bool, Result);
    
    UPROPERTY(BlueprintAssignable)
    FOnSaveCommunicationDelegate OnAnySaveStarted;
    
    UPROPERTY(BlueprintAssignable)
    FOnSaveCommunicationDelegateWithResult OnAnySaveCompleted;
    
    UPROPERTY(BlueprintAssignable)
    FOnSaveCommunicationDelegate OnManualSaveStarted;
    
    UPROPERTY(BlueprintAssignable)
    FOnSaveCommunicationDelegateWithResult OnManualSaveCompleted;
    
    UPROPERTY(BlueprintAssignable)
    FOnSaveCommunicationDelegate OnAutoSaveStarted;
    
    UPROPERTY(BlueprintAssignable)
    FOnSaveCommunicationDelegateWithResult OnAutoSaveCompleted;
    
    UPROPERTY(BlueprintAssignable)
    FOnSaveCommunicationDelegate OnLoadStarted;
    
    UPROPERTY(BlueprintAssignable)
    FOnSaveCommunicationDelegate OnLoadCompleted;
    
    UUWESaveCommunicationComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void TriggerAsyncSaveGame(const EUWESaveGameCollectionIndex Index);
    
    UFUNCTION(Reliable, Server)
    void TriggerAsyncAutoSaveGame(const bool bForce);
    
private:
    UFUNCTION(Reliable, Server)
    void ServerRequestStoreForSaveId(const FString& SaveId);
    
public:
    UFUNCTION(Reliable, Server)
    void ServerRequestSaveSlotsMatchingCurrentContext();
    
private:
    UFUNCTION(Reliable, Server)
    void ServerRequestLoadForSaveId(const FString& SaveId);
    
    UFUNCTION(Reliable, Server)
    void ServerRequestIsSavingBlocked();
    
    UFUNCTION(Reliable, Server)
    void ServerRequestDoesSaveGameExist(const FString& SaveSlot);
    
    UFUNCTION()
    void OnMetaDataScanComplete(const TArray<FUWESaveGameCollectionInfo>& SaveInfos);
    
public:
    UFUNCTION(Client, Reliable)
    void ClientReceiveSaveSlotsMatchingCurrentContext(const TArray<FUWESlotInfoSimple>& SaveSlots);
    
private:
    UFUNCTION(Client, Reliable)
    void ClientReceiveIsSavingBlocked(bool IsBlocked);
    
    UFUNCTION(Client, Reliable)
    void ClientReceiveDoesSaveGameExist(const bool Result);
    
public:
    UFUNCTION(BlueprintCallable)
    void CheckIsSavingBlocked(UUWESaveCommunicationComponent::FIsSavingBlockedDelegate InDelegate);
    
private:
    UFUNCTION(NetMulticast, Reliable)
    void AutoSaveStarted();
    
    UFUNCTION(NetMulticast, Reliable)
    void AutoSaveCompleted(bool Result);
    
    UFUNCTION(NetMulticast, Reliable)
    void AsyncSaveGameStarted();
    
    UFUNCTION(NetMulticast, Reliable)
    void AsyncSaveGameCompleted(bool Result);
    
    UFUNCTION(NetMulticast, Reliable)
    void AnySaveStarted();
    
};

