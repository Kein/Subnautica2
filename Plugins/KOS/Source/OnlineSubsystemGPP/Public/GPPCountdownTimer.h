#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GPPBaseScreen.h"
#include "GPPCountdownTimer.generated.h"

class UImage;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UTextBlock;

UCLASS(EditInlineNew)
class ONLINESUBSYSTEMGPP_API UGPPCountdownTimer : public UGPPBaseScreen {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnTimerCompleteEvent);
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UImage* Img_ProgressBar;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UTextBlock* T_Countdown;
    
    UPROPERTY(EditAnywhere)
    float Timeout;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* ProgressBarMaterial;
    
    UPROPERTY(EditAnywhere)
    FColor ProgressBarColor;
    
    UPROPERTY(BlueprintAssignable)
    FOnTimerCompleteEvent OnTimerComplete;
    
protected:
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* DynProgressBarMaterialIns;
    
public:
    UGPPCountdownTimer();

    UFUNCTION(BlueprintCallable)
    void StopTimer();
    
    UFUNCTION(BlueprintCallable)
    void StartTimer();
    
    UFUNCTION(BlueprintCallable)
    void StartCountdownUntil(FDateTime InEndTime);
    
    UFUNCTION(BlueprintCallable)
    void SetTimeout(float InTimeout);
    
    UFUNCTION(BlueprintCallable)
    void ResumeTimer();
    
    UFUNCTION(BlueprintCallable)
    void PauseTimer();
    
    UFUNCTION(BlueprintPure)
    bool IsRunning() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPaused() const;
    
};

