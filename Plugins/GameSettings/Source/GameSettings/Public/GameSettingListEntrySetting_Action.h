#pragma once
#include "CoreMinimal.h"
#include "GameSettingListEntry_Setting.h"
#include "GameSettingListEntrySetting_Action.generated.h"

class UCommonButtonBase;
class UGameSettingAction;

UCLASS(Abstract, EditInlineNew)
class GAMESETTINGS_API UGameSettingListEntrySetting_Action : public UGameSettingListEntry_Setting {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UGameSettingAction* ActionSetting;
    
private:
    UPROPERTY(BlueprintReadOnly, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonBase* Button_Action;
    
public:
    UGameSettingListEntrySetting_Action();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnSettingAssigned(const FText& ActionText);
    
};

