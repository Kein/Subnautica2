#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "SonarSaveGameResponse.h"
#include "DownloadCompletedDelegateDelegate.h"
#include "EUWEImportSaveGameResult.h"
#include "TransferProgressDelegateDelegate.h"
#include "UploadCompletedDelegateDelegate.h"
#include "UWESaveGameSharingSubsystem.generated.h"

UCLASS(BlueprintType)
class UWESAVESYSTEM_API UUWESaveGameSharingSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FTransferProgressDelegate OnUploadProgress;
    
    UPROPERTY(BlueprintAssignable)
    FUploadCompletedDelegate OnUploadCompleted;
    
    UPROPERTY(BlueprintAssignable)
    FTransferProgressDelegate OnDownloadProgress;
    
    UPROPERTY(BlueprintAssignable)
    FDownloadCompletedDelegate OnDownloadCompleted;
    
    UUWESaveGameSharingSubsystem();

protected:
    UFUNCTION()
    FString UploadSaveGameToCloud(FSonarSaveGameResponse UploadResponse);
    
public:
    UFUNCTION(BlueprintCallable)
    void StartSaveGameUpload(const FString& SlotName);
    
    UFUNCTION(BlueprintCallable)
    void StartSaveGameDownload(const FString& SaveId);
    
protected:
    UFUNCTION()
    void OnUploadSaveGameCommand(const TArray<FString>& Args);
    
    UFUNCTION()
    void OnDownloadSaveGameCommand(const TArray<FString>& Args);
    
    UFUNCTION()
    void OnCancelSaveGameTransferCommand(const TArray<FString>& Args);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsOperationPending();
    
private:
    UFUNCTION()
    void InternalDownloadAndImportCompleted(bool bDownloadSucceeded, const FSonarSaveGameResponse& DownloadResponse, EUWEImportSaveGameResult ImportResult, const FString& SlotName, const FGuid& SaveId);
    
protected:
    UFUNCTION()
    FString DownloadSaveGameFromCloud(FSonarSaveGameResponse DownloadResponse);
    
public:
    UFUNCTION(BlueprintCallable)
    void CancelOperation();
    
};

