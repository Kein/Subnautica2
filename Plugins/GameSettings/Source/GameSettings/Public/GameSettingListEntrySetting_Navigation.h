#pragma once
#include "CoreMinimal.h"
#include "GameSettingListEntry_Setting.h"
#include "GameSettingListEntrySetting_Navigation.generated.h"

class UCommonButtonBase;
class UGameSettingCollectionPage;

UCLASS(Abstract, EditInlineNew)
class GAMESETTINGS_API UGameSettingListEntrySetting_Navigation : public UGameSettingListEntry_Setting {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UGameSettingCollectionPage* CollectionSetting;
    
private:
    UPROPERTY(BlueprintReadOnly, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonBase* Button_Navigate;
    
public:
    UGameSettingListEntrySetting_Navigation();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnSettingAssigned(const FText& ActionText);
    
};

