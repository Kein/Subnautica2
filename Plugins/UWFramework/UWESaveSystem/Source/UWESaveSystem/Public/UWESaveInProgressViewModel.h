#pragma once
#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "UWESaveInProgressViewModel.generated.h"

class UObject;

UCLASS()
class UWESAVESYSTEM_API UUWESaveInProgressViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    bool bDisplaySaveBlockedWarning;
    
    UPROPERTY(BlueprintReadOnly)
    bool bAutoSaveInProgress;
    
    UPROPERTY(BlueprintReadOnly)
    bool bManualSaveInProgress;
    
    UPROPERTY(BlueprintReadWrite)
    bool bSaveNotificationInProgress;
    
    UPROPERTY(BlueprintReadOnly)
    bool bSaveResult;
    
    UPROPERTY(BlueprintReadOnly)
    bool bSavingBlocked;
    
public:
    UUWESaveInProgressViewModel();

protected:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool ShouldPromptToSave(const UObject* WorldContextObject);
    
private:
    UFUNCTION()
    void OnSavingUnblocked();
    
    UFUNCTION()
    void OnSavingBlocked();
    
    UFUNCTION()
    void OnManualSaveStarted();
    
    UFUNCTION()
    void OnManualSaveFinished(bool bInSaveResult);
    
    UFUNCTION()
    void OnAutoSaveStarted();
    
    UFUNCTION()
    void OnAutoSaveFinished(bool bInSaveResult);
    
protected:
    UFUNCTION(BlueprintPure)
    bool IsAnySaveInProgress() const;
    
};

