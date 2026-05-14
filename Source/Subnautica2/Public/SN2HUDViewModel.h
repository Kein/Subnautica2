#pragma once
#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "SN2HUDViewModel.generated.h"

class UObject;
class USN2HUDViewModel;

UCLASS()
class SUBNAUTICA2_API USN2HUDViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    bool IsDepthMeterVisible;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsCompassVisible;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsQuickslotsBarVisible;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsControllerConnected;
    
    UPROPERTY(BlueprintReadWrite)
    bool AreRadialBarsVisible;
    
public:
    USN2HUDViewModel();

    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContext"))
    static USN2HUDViewModel* TryGetHUDViewModel(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    void SetAreRadialBarsVisible(bool bValue);
    
};

