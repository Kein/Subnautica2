#pragma once
#include "CoreMinimal.h"
#include "GameSettingListEntry_Setting.h"
#include "GameSettingListEntrySetting_Scalar.generated.h"

class UAnalogSlider;
class UCommonTextBlock;
class UGameSettingValueScalar;
class UPanelWidget;

UCLASS(Abstract, EditInlineNew)
class GAMESETTINGS_API UGameSettingListEntrySetting_Scalar : public UGameSettingListEntry_Setting {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UGameSettingValueScalar* ScalarSetting;
    
private:
    UPROPERTY(BlueprintReadOnly, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_Value;
    
    UPROPERTY(BlueprintReadOnly, Instanced, meta=(AllowPrivateAccess=true))
    UAnalogSlider* Slider_SettingValue;
    
    UPROPERTY(BlueprintReadOnly, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_SettingValue;
    
public:
    UGameSettingListEntrySetting_Scalar();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnValueChanged(float Value);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDefaultValueChanged(float DefaultValue);
    
    UFUNCTION()
    void HandleSliderValueChanged(float Value);
    
    UFUNCTION()
    void HandleSliderCaptureEnded();
    
};

