#pragma once
#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "SonarSaveUploadMetadata.h"
#include "UWESaveGameDownloadStatus.h"
#include "UWESaveGameDownloadViewModel.generated.h"

class UObject;
class UUWESaveGameSharingSubsystem;

UCLASS()
class UWESAVESYSTEM_API UUWESaveGameDownloadViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UUWESaveGameSharingSubsystem* SaveGameSharingSubsystem;
    
    UPROPERTY(BlueprintReadOnly)
    float DownloadProgress;
    
    UPROPERTY(BlueprintReadOnly)
    bool DownloadCompleted;
    
    UPROPERTY(BlueprintReadOnly)
    FUWESaveGameDownloadStatus DownloadStatus;
    
    UPROPERTY(BlueprintReadOnly)
    FString SlotName;
    
    UPROPERTY(BlueprintReadOnly)
    FSonarSaveUploadMetadata SaveMetaData;
    
public:
    UUWESaveGameDownloadViewModel();

    UFUNCTION(BlueprintCallable)
    void StartDownload(const FString& SaveId);
    
    UFUNCTION(BlueprintCallable)
    void Shutdown();
    
protected:
    UFUNCTION()
    void OnDownloadProgress(float InProgress, uint64 Sent, uint64 Total);
    
    UFUNCTION()
    void OnDownloadCompleted(FUWESaveGameDownloadStatus Status, const FString& InSlotName, const FSonarSaveUploadMetadata& InSaveMetaData);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    bool Initialize(UObject* WorldContext);
    
};

