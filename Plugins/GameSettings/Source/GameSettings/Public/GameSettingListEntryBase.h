#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "GameSettingListEntryBase.generated.h"

class UGameSetting;
class UUserWidget;
class UWidget;

UCLASS(Abstract, EditInlineNew)
class GAMESETTINGS_API UGameSettingListEntryBase : public UCommonUserWidget, public IUserObjectListEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UGameSetting* Setting;
    
private:
    UPROPERTY(BlueprintReadOnly, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* Background;
    
public:
    UGameSettingListEntryBase();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    UWidget* GetPrimaryGamepadFocusWidget();
    

    // Fix for true pure virtual functions not being implemented
};

