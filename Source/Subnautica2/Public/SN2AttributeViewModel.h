#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "MVVMViewModelBase.h"
#include "SN2AttributeViewModel.generated.h"

UCLASS()
class SUBNAUTICA2_API USN2AttributeViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    float CurrentValue;
    
    UPROPERTY(BlueprintReadOnly)
    float LastValueDelta;
    
    UPROPERTY(BlueprintReadOnly)
    float MaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LowWarningThresholdThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CriticalWarningThresholdThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayAttribute ValueAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayAttribute MaxValueAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WarningThresholdPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag WarningIdentifier;
    
    USN2AttributeViewModel();

    UFUNCTION(BlueprintPure)
    bool IsWarningTriggered() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLowValueWarningTriggered() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDepletedValueWarningTriggered() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCriticalValueWarningTriggered() const;
    
    UFUNCTION(BlueprintPure)
    float GetValuePercent() const;
    
};

