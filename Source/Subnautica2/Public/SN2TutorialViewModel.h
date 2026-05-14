#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MVVMViewModelBase.h"
#include "SN2TutorialViewModel.generated.h"

class UObject;
class UUWENotificationViewModel;
class UUWETriggeredNotificationData;

UCLASS()
class SUBNAUTICA2_API USN2TutorialViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    UUWENotificationViewModel* Pending;
    
public:
    USN2TutorialViewModel();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ShowTutorialPrompt(UObject* WorldContextObject, FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable)
    void ShowPrompt(FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void ConstructAndShowTutorialPrompt(UObject* WorldContextObject, UUWETriggeredNotificationData* TriggeredNotificationData);
    
    UFUNCTION(BlueprintCallable)
    void ConstructAndShowPrompt(UUWETriggeredNotificationData* TriggeredNotificationData);
    
    UFUNCTION(BlueprintCallable)
    void ClearPending();
    
};

