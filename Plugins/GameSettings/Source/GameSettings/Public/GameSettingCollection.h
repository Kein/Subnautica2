#pragma once
#include "CoreMinimal.h"
#include "GameSetting.h"
#include "GameSettingCollection.generated.h"

UCLASS()
class GAMESETTINGS_API UGameSettingCollection : public UGameSetting {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TArray<UGameSetting*> Settings;
    
public:
    UGameSettingCollection();

};

