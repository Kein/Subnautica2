#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GameSettingDetailExtension.generated.h"

class UGameSetting;

UCLASS(Abstract, EditInlineNew)
class GAMESETTINGS_API UGameSettingDetailExtension : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UGameSetting* Setting;
    
public:
    UGameSettingDetailExtension();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnSettingValueChanged(UGameSetting* InSetting);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSettingAssigned(UGameSetting* InSetting);
    
};

