#pragma once
#include "CoreMinimal.h"
#include "GameSettingFilterState.generated.h"

class UGameSetting;

USTRUCT(BlueprintType)
struct GAMESETTINGS_API FGameSettingFilterState {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bIncludeDisabled;
    
    UPROPERTY()
    bool bIncludeHidden;
    
    UPROPERTY()
    bool bIncludeResetable;
    
    UPROPERTY()
    bool bIncludeNestedPages;
    
private:
    UPROPERTY()
    TArray<UGameSetting*> SettingRootList;
    
    UPROPERTY()
    TArray<UGameSetting*> SettingAllowList;
    
public:
    FGameSettingFilterState();
};

