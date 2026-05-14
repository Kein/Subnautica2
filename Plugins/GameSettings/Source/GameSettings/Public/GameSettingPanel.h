#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "GameplayTagContainer.h"
#include "GameSettingFilterState.h"
#include "GameSettingPanel.generated.h"

class UGameSetting;
class UGameSettingDetailView;
class UGameSettingListView;
class UGameSettingRegistry;

UCLASS(Abstract, EditInlineNew)
class GAMESETTINGS_API UGameSettingPanel : public UCommonUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnExecuteNamedActionBP, UGameSetting*, Setting, FGameplayTag, Action);
    
private:
    UPROPERTY(Transient)
    UGameSettingRegistry* Registry;
    
    UPROPERTY(Transient)
    TArray<UGameSetting*> VisibleSettings;
    
    UPROPERTY(Transient)
    UGameSetting* LastHoveredOrSelectedSetting;
    
    UPROPERTY(Transient)
    FGameSettingFilterState FilterState;
    
    UPROPERTY(Transient)
    TArray<FGameSettingFilterState> FilterNavigationStack;
    
    UPROPERTY(BlueprintReadOnly, Instanced, meta=(AllowPrivateAccess=true))
    UGameSettingListView* ListView_Settings;
    
    UPROPERTY(BlueprintReadOnly, Instanced, meta=(AllowPrivateAccess=true))
    UGameSettingDetailView* Details_Settings;
    
    UPROPERTY(BlueprintAssignable)
    FOnExecuteNamedActionBP BP_OnExecuteNamedAction;
    
public:
    UGameSettingPanel();

    UFUNCTION(BlueprintCallable)
    void RefreshFromSettings();
    
};

