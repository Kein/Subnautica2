#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameSettingClassExtensions.h"
#include "GameSettingNameExtensions.h"
#include "Templates/SubclassOf.h"
#include "GameSettingVisualData.generated.h"

class UGameSetting;
class UGameSettingListEntryBase;

UCLASS()
class GAMESETTINGS_API UGameSettingVisualData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TMap<TSubclassOf<UGameSetting>, TSubclassOf<UGameSettingListEntryBase>> EntryWidgetForClass;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<FName, TSubclassOf<UGameSettingListEntryBase>> EntryWidgetForName;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<TSubclassOf<UGameSetting>, FGameSettingClassExtensions> ExtensionsForClasses;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<FName, FGameSettingNameExtensions> ExtensionsForName;
    
public:
    UGameSettingVisualData();

};

