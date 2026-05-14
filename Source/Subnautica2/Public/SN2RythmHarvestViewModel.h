#pragma once
#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "EUWEHarvestDifficultyLevel.h"
#include "SN2RythmHarvestViewModel.generated.h"

class UCommonUserWidget;
class UObject;
class USN2RythmHarvestViewModel;

UCLASS()
class SUBNAUTICA2_API USN2RythmHarvestViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    float TimeLastImperfectHit;
    
    UPROPERTY(BlueprintReadWrite)
    float TimeLastPerfectHit;
    
    UPROPERTY(BlueprintReadWrite)
    float HarvestTime;
    
    UPROPERTY(BlueprintReadWrite)
    EUWEHarvestDifficultyLevel DifficultyLevel;
    
    UPROPERTY(BlueprintReadWrite)
    bool HasValidTarget;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsIdle;
    
private:
    UPROPERTY()
    UObject* WorldContextObject;
    
    UPROPERTY(Instanced)
    UCommonUserWidget* RythmGameWidget;
    
public:
    USN2RythmHarvestViewModel();

    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContext"))
    static USN2RythmHarvestViewModel* TryGetRythmHarvestViewModel(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    void ShowRythmGame();
    
    UFUNCTION(BlueprintCallable)
    void SetIsIdle(bool InIsIdle);
    
    UFUNCTION(BlueprintCallable)
    void HideRythmGame();
    
};

