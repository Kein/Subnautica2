#pragma once
#include "CoreMinimal.h"
#include "GameSettingValue.h"
#include "GameSettingValueScalar.generated.h"

UCLASS(Abstract)
class GAMESETTINGS_API UGameSettingValueScalar : public UGameSettingValue {
    GENERATED_BODY()
public:
    UGameSettingValueScalar();

};

