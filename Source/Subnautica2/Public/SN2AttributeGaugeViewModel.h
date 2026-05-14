#pragma once
#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "UWEGameConfigSettings.h"
#include "SN2AttributeGaugeViewModel.generated.h"

class UObject;

UCLASS()
class SUBNAUTICA2_API USN2AttributeGaugeViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    UObject* WorldContextObject;
    
    UPROPERTY(BlueprintReadOnly)
    bool bShouldShowSurvivalGauges;
    
    USN2AttributeGaugeViewModel();

private:
    UFUNCTION()
    void OnSettingsChanged(const FUWEGameConfigSettings& ChangedSettings);
    
};

