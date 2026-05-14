#pragma once
#include "CoreMinimal.h"
#include "GameSettingListEntryBase.h"
#include "GameSettingListEntry_Setting.generated.h"

class UCommonTextBlock;

UCLASS(Abstract, EditInlineNew)
class GAMESETTINGS_API UGameSettingListEntry_Setting : public UGameSettingListEntryBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_SettingName;
    
public:
    UGameSettingListEntry_Setting();

};

