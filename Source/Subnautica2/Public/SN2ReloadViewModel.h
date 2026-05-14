#pragma once
#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "SN2ReloadViewModel.generated.h"

class UObject;
class UTexture2D;

UCLASS()
class SUBNAUTICA2_API USN2ReloadViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    UTexture2D* Thumbnail;
    
    UPROPERTY(BlueprintReadOnly)
    float EnergyPercent;
    
public:
    USN2ReloadViewModel();

    UFUNCTION(BlueprintCallable)
    void UnloadBattery();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContext"))
    void Setup(UObject* InWorldContext);
    
    UFUNCTION(BlueprintCallable)
    void PrevBattery();
    
    UFUNCTION(BlueprintPure)
    int32 NumBatteries() const;
    
    UFUNCTION(BlueprintCallable)
    void NextBattery();
    
    UFUNCTION(BlueprintCallable)
    void LoadBattery();
    
    UFUNCTION(BlueprintPure)
    bool HasPrevBattery() const;
    
    UFUNCTION(BlueprintPure)
    bool HasNextBattery() const;
    
};

