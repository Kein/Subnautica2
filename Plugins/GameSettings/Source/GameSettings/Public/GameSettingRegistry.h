#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameSettingRegistry.generated.h"

class UGameSetting;
class ULocalPlayer;

UCLASS(Abstract)
class GAMESETTINGS_API UGameSettingRegistry : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TArray<UGameSetting*> TopLevelSettings;
    
    UPROPERTY(Transient)
    TArray<UGameSetting*> RegisteredSettings;
    
    UPROPERTY(Transient)
    ULocalPlayer* OwningLocalPlayer;
    
public:
    UGameSettingRegistry();

};

