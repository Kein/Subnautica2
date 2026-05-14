#pragma once
#include "CoreMinimal.h"
#include "GameSettingListEntry_Setting.h"
#include "GameSettingListEntrySetting_Discrete.generated.h"

class UCommonButtonBase;
class UGameSettingRotator;
class UGameSettingValueDiscrete;
class UPanelWidget;

UCLASS(Abstract, EditInlineNew)
class GAMESETTINGS_API UGameSettingListEntrySetting_Discrete : public UGameSettingListEntry_Setting {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UGameSettingValueDiscrete* DiscreteSetting;
    
private:
    UPROPERTY(BlueprintReadOnly, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_Value;
    
    UPROPERTY(BlueprintReadOnly, Instanced, meta=(AllowPrivateAccess=true))
    UGameSettingRotator* Rotator_SettingValue;
    
    UPROPERTY(BlueprintReadOnly, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonBase* Button_Decrease;
    
    UPROPERTY(BlueprintReadOnly, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonBase* Button_Increase;
    
public:
    UGameSettingListEntrySetting_Discrete();

};

