#pragma once
#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "NotificationData.h"
#include "UWENotificationSystemViewModel.generated.h"

class UObject;
class UUWENotificationComponent;
class UUWENotificationViewModel;

UCLASS()
class UWENOTIFICATIONS_API UUWENotificationSystemViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    bool HasReasonToHide;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<UUWENotificationViewModel*> PendingNotifications;
    
    UPROPERTY(Instanced)
    UUWENotificationComponent* NotificationComponent;
    
    UPROPERTY()
    bool CriticalErrorMode;
    
public:
    UUWENotificationSystemViewModel();

    UFUNCTION(BlueprintCallable)
    void ShowNotification(const FNotificationData& Data);
    
protected:
    UFUNCTION()
    void SetCriticalErrorMode(bool Enabled);
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveReasonToHide(const FString& Reason);
    
protected:
    UFUNCTION()
    void OnNotificationStarted(const FNotificationData& NotificationData);
    
    UFUNCTION()
    void OnNotificationCleared();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    void Initialize(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    void FinishNotification();
    
    UFUNCTION(BlueprintCallable)
    void ClearPendingNotifications();
    
    UFUNCTION(BlueprintCallable)
    void AddReasonToHide(const FString& Reason);
    
};

