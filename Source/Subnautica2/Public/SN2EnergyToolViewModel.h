#pragma once
#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "SN2EnergyToolViewModel.generated.h"

class AUWEBaseItem;
class UObject;

UCLASS()
class SUBNAUTICA2_API USN2EnergyToolViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    float CurrentEnergyPercent;
    
    UPROPERTY(BlueprintReadWrite)
    bool HasEnergy;
    
    UPROPERTY(BlueprintReadWrite)
    bool HasAmmoLoaded;
    
private:
    UPROPERTY()
    UObject* WorldContextObject;
    
public:
    USN2EnergyToolViewModel();

private:
    UFUNCTION()
    void OnToolChanged(AUWEBaseItem* OldTool, AUWEBaseItem* NewTool, bool bIsFirstTimeEquipped);
    
    UFUNCTION()
    void OnLocalClientReady();
    
    UFUNCTION()
    void OnEnergyChanged(float CurrentPercent);
    
    UFUNCTION()
    void OnAmmoReleased();
    
    UFUNCTION()
    void OnAmmoLoaded();
    
};

