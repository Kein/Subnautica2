#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MVVMViewModelBase.h"
#include "SN2SonicResonatorFrequencyViewModel.generated.h"

class AActor;
class UObject;
class USN2SonicResonatorFrequencyViewModel;
class UUWEItemType;

UCLASS()
class SUBNAUTICA2_API USN2SonicResonatorFrequencyViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    float TimeLastBlast;
    
    UPROPERTY(BlueprintReadWrite)
    float Frequency;
    
    UPROPERTY(BlueprintReadWrite)
    float TimePassed;
    
    UPROPERTY(BlueprintReadWrite)
    bool bHasResonateTarget;
    
    UPROPERTY(BlueprintReadWrite)
    bool bInstigatorCanResonateTarget;
    
    UPROPERTY(BlueprintReadWrite)
    bool bHasAnyTarget;
    
    UPROPERTY(BlueprintReadWrite)
    FFloatRange TargetResonateRange;
    
    UPROPERTY(BlueprintReadWrite)
    float FrequencyMatchDegree;
    
    UPROPERTY(BlueprintReadWrite)
    bool FrequencyInRange;
    
    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<AActor> HoverTarget;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsCharged;
    
protected:
    UPROPERTY(BlueprintReadWrite)
    bool IsCharging;
    
private:
    UPROPERTY()
    UObject* WorldContextObject;
    
public:
    USN2SonicResonatorFrequencyViewModel();

    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContext"))
    static USN2SonicResonatorFrequencyViewModel* TryGetSonicResonatorFrequencyViewModel(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    void SetResonatorItemType(const UUWEItemType* ItemType);
    
    UFUNCTION(BlueprintCallable)
    void SetIsCharging(bool InIsCharging);
    
    UFUNCTION(BlueprintCallable)
    void SetIsCharged(bool InIsCharging);
    
};

