#pragma once
#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "SonarSaveGameResponse.h"
#include "UWESaveGameUploadViewModel.generated.h"

class UObject;
class UUWESaveGameCollectionInfoViewModel;
class UUWESaveGameSharingSubsystem;

UCLASS()
class UWESAVESYSTEM_API UUWESaveGameUploadViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UUWESaveGameSharingSubsystem* SaveGameSharingSubsystem;
    
    UPROPERTY(BlueprintReadOnly)
    float UploadProgress;
    
    UPROPERTY(BlueprintReadOnly)
    bool UploadCompleted;
    
    UPROPERTY(BlueprintReadOnly)
    bool UploadSucceeded;
    
    UPROPERTY(BlueprintReadOnly)
    FString SaveId;
    
    UPROPERTY()
    UUWESaveGameCollectionInfoViewModel* SaveGameCollectionInfoVM;
    
public:
    UUWESaveGameUploadViewModel();

    UFUNCTION(BlueprintCallable)
    void StartUpload();
    
    UFUNCTION(BlueprintCallable)
    void Shutdown();
    
protected:
    UFUNCTION()
    void OnUploadProgress(float InProgress, uint64 Sent, uint64 Total);
    
    UFUNCTION()
    void OnUploadCompleted(bool bSuccess, FSonarSaveGameResponse Response);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    bool Initialize(UObject* WorldContext, UUWESaveGameCollectionInfoViewModel* ViewModel);
    
};

