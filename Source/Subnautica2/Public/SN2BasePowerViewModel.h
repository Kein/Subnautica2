#pragma once
#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "SN2BasePowerViewModel.generated.h"

UCLASS()
class SUBNAUTICA2_API USN2BasePowerViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    bool IsInBase;
    
    UPROPERTY(BlueprintReadWrite)
    bool ShowPowerHUD;
    
    UPROPERTY(BlueprintReadWrite)
    float CurrentPower;
    
    UPROPERTY(BlueprintReadWrite)
    float PowerStorage;
    
    UPROPERTY(BlueprintReadWrite)
    float PowerGeneration;
    
    UPROPERTY(BlueprintReadWrite)
    float PowerConsumption;
    
    UPROPERTY(BlueprintReadWrite)
    bool HasPower;
    
    UPROPERTY(BlueprintReadWrite)
    bool HasGeneration;
    
    UPROPERTY(BlueprintReadWrite)
    bool HasStoredPower;
    
    USN2BasePowerViewModel();

    UFUNCTION(BlueprintPure)
    float GetStoredPowerConsumptionPercent() const;
    
    UFUNCTION(BlueprintPure)
    float GetPowerNormalized() const;
    
    UFUNCTION(BlueprintPure)
    float GetPowerGenerationPercent() const;
    
    UFUNCTION(BlueprintPure)
    float GetGeneratedPowerConsumptionPercent() const;
    
};

