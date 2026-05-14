#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "GameSettingActionInterface.generated.h"

class UGameSetting;

UINTERFACE(Blueprintable, MinimalAPI)
class UGameSettingActionInterface : public UInterface {
    GENERATED_BODY()
};

class IGameSettingActionInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ExecuteActionForSetting(FGameplayTag ActionTag, UGameSetting* InSetting);
    
};

