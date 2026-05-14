#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "GameSettingScreen.generated.h"

class UGameSettingCollection;
class UGameSettingPanel;
class UGameSettingRegistry;

UCLASS(Abstract, EditInlineNew)
class GAMESETTINGS_API UGameSettingScreen : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Instanced, meta=(AllowPrivateAccess=true))
    UGameSettingPanel* Settings_Panel;
    
    UPROPERTY(Transient)
    UGameSettingRegistry* Registry;
    
public:
    UGameSettingScreen();

protected:
    UFUNCTION(BlueprintNativeEvent)
    void OnSettingsDirtyStateChanged(bool bSettingsDirty);
    
    UFUNCTION(BlueprintCallable)
    void NavigateToSettings(const TArray<FName>& SettingDevNames);
    
    UFUNCTION(BlueprintCallable)
    void NavigateToSetting(FName SettingDevName);
    
    UFUNCTION(BlueprintPure)
    bool HaveSettingsBeenChanged() const;
    
    UFUNCTION(BlueprintCallable)
    UGameSettingCollection* GetSettingCollection(FName SettingDevName, bool& HasAnySettings);
    
    UFUNCTION(BlueprintCallable)
    void CancelChanges();
    
    UFUNCTION(BlueprintCallable)
    bool AttemptToPopNavigation();
    
    UFUNCTION(BlueprintCallable)
    void ApplyChanges();
    
};

