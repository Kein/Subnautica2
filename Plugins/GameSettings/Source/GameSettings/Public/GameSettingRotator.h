#pragma once
#include "CoreMinimal.h"
#include "CommonRotator.h"
#include "GameSettingRotator.generated.h"

UCLASS(Abstract, EditInlineNew)
class GAMESETTINGS_API UGameSettingRotator : public UCommonRotator {
    GENERATED_BODY()
public:
    UGameSettingRotator();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnDefaultOptionSpecified(int32 DefaultOptionIndex);
    
};

