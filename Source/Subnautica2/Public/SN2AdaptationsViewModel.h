#pragma once
#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "UWEEventKey.h"
#include "UWEAdaptationStateInfo.h"
#include "UWEPlayerAdaptation.h"
#include "SN2AdaptationsViewModel.generated.h"

class UObject;

UCLASS()
class SUBNAUTICA2_API USN2AdaptationsViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    UObject* WorldContextObject;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FUWEAdaptationStateInfo> DisplayAcquiredNotification;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FUWEAdaptationStateInfo> AdaptationStates;
    
    USN2AdaptationsViewModel();

private:
    UFUNCTION()
    void RefreshAdaptations();
    
    UFUNCTION()
    void OnClientPlayerReady();
    
    UFUNCTION()
    void OnAdaptationVisibilityChanged(FUWEEventKey EventKey, int32 OldValue, int32 NewValue);
    
    UFUNCTION()
    void OnAdaptationRemoved(const FUWEPlayerAdaptation& Adaptation);
    
    UFUNCTION()
    void OnAdaptationInstalled(const FUWEPlayerAdaptation& Adaptation);
    
public:
    UFUNCTION(BlueprintCallable)
    void ClearNextQueuedAcquired();
    
};

