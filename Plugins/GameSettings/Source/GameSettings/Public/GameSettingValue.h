#pragma once
#include "CoreMinimal.h"
#include "GameSetting.h"
#include "GameSettingValue.generated.h"

UCLASS(Abstract)
class GAMESETTINGS_API UGameSettingValue : public UGameSetting {
    GENERATED_BODY()
public:
    UGameSettingValue();

};

