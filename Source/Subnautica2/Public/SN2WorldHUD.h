#pragma once
#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "SN2WorldHUD.generated.h"

class USN2AdaptationsViewModel;
class USN2AttributeGaugeViewModel;
class USN2AttributeViewModel;
class USN2BasePowerViewModel;
class USN2BuilderMenuViewModel;
class USN2DatabankViewModel;
class USN2DialogueViewModel;
class USN2EnergyToolViewModel;
class USN2FeedbackViewModel;
class USN2HUDViewModel;
class USN2HoverTargetViewModel;
class USN2PdaViewModel;
class USN2PingSystemViewModel;
class USN2PinnedRecipesViewModel;
class USN2PlayerHeadingViewModel;
class USN2PlayerInSubmarineViewModel;
class USN2ProximityTextPopupViewModel;
class USN2QuickSlotsBarViewModel;
class USN2RadioViewModel;
class USN2RecipesListViewModel;
class USN2ReloadPromptsViewModel;
class USN2RythmHarvestViewModel;
class USN2ScannerTargetViewModel;
class USN2SonicResonatorFrequencyViewModel;
class USN2TeamViewModel;
class USN2TimeOfDayViewModel;
class USN2TutorialViewModel;
class USN2WarningsActiveViewModel;
class UUWEBiomodHUDViewModel;
class UUWEEdgeOfWorldHUDViewModel;
class UUWENotificationSystemViewModel;
class UUWEPlayerAlertsViewModel;
class UUWESaveInProgressViewModel;

UCLASS(NonTransient)
class SUBNAUTICA2_API ASN2WorldHUD : public AHUD {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TMap<FString, USN2AttributeViewModel*> AttributeViewModels;
    
    UPROPERTY()
    USN2QuickSlotsBarViewModel* QuickSlotsBarViewModel;
    
    UPROPERTY()
    USN2PdaViewModel* PdaViewModel;
    
    UPROPERTY()
    USN2HUDViewModel* HUDViewModel;
    
    UPROPERTY()
    USN2DatabankViewModel* DatabankViewModel;
    
    UPROPERTY()
    USN2ReloadPromptsViewModel* ReloadPromptsViewModel;
    
    UPROPERTY()
    UUWENotificationSystemViewModel* NotificationsViewModel;
    
    UPROPERTY()
    USN2DialogueViewModel* DialogueViewModel;
    
    UPROPERTY()
    USN2PingSystemViewModel* PingSystemViewModel;
    
    UPROPERTY()
    USN2PinnedRecipesViewModel* PinnedRecipesViewModel;
    
    UPROPERTY()
    USN2RecipesListViewModel* FabricatorRecipesListViewModel;
    
    UPROPERTY()
    USN2RecipesListViewModel* PDARecipesListViewModel;
    
    UPROPERTY()
    USN2RecipesListViewModel* BuilderRecipesListViewModel;
    
    UPROPERTY()
    USN2TutorialViewModel* TutorialViewModel;
    
    UPROPERTY()
    USN2BasePowerViewModel* BasePowerViewModel;
    
    UPROPERTY()
    USN2BuilderMenuViewModel* BuilderMenuViewModel;
    
    UPROPERTY()
    USN2PlayerInSubmarineViewModel* PlayerInSubmarineViewModel;
    
    UPROPERTY()
    USN2PlayerHeadingViewModel* PlayerHeadingViewModel;
    
    UPROPERTY()
    UUWEBiomodHUDViewModel* BiomodOwnerViewModel;
    
    UPROPERTY()
    USN2HoverTargetViewModel* HoverTargetViewModel;
    
    UPROPERTY()
    USN2ProximityTextPopupViewModel* ProximityTextPopupViewModel;
    
    UPROPERTY()
    UUWESaveInProgressViewModel* SaveInProgressViewModel;
    
    UPROPERTY()
    USN2RythmHarvestViewModel* RythmHarvestViewModel;
    
    UPROPERTY()
    USN2SonicResonatorFrequencyViewModel* SonicResonatorFrequencyViewModel;
    
    UPROPERTY()
    USN2ScannerTargetViewModel* ScannerTargetViewModel;
    
    UPROPERTY()
    USN2EnergyToolViewModel* EnergyToolViewModel;
    
    UPROPERTY()
    USN2RadioViewModel* RadioViewModel;
    
    UPROPERTY()
    USN2WarningsActiveViewModel* WarningsActiveViewModel;
    
    UPROPERTY()
    USN2AdaptationsViewModel* PlayerAdaptationsViewModel;
    
    UPROPERTY()
    UUWEPlayerAlertsViewModel* PlayerAlertViewModel;
    
    UPROPERTY()
    USN2AttributeGaugeViewModel* AttributeGaugeViewModel;
    
    UPROPERTY()
    UUWEEdgeOfWorldHUDViewModel* EdgeOfWorldHUDViewModel;
    
    UPROPERTY()
    USN2TimeOfDayViewModel* TimeOfDayViewModel;
    
    UPROPERTY()
    USN2TeamViewModel* TeamViewModel;
    
    UPROPERTY()
    USN2FeedbackViewModel* FeedbackViewModel;
    
public:
    ASN2WorldHUD(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(Exec)
    void TutorialPrompt(const FString& Name);
    
public:
    UFUNCTION(Exec)
    void ToggleHUD();
    
    UFUNCTION(BlueprintPure)
    bool ShouldShowHoverTargetInfoReticle();
    
    UFUNCTION(BlueprintPure)
    bool ShouldShowHoverTargetInfo();
    
    UFUNCTION(BlueprintCallable)
    void RegisterGlobalViewModels();
    
protected:
    UFUNCTION()
    void OnPlayerStateSet();
    
    UFUNCTION()
    void OnGameStateSet();
    
    UFUNCTION()
    void OnDisplayModeChanged();
    
public:
    UFUNCTION(Exec)
    void HandleShowDebugKey();
    
    UFUNCTION(Exec)
    void HandlePreviousDebugTargetKey();
    
    UFUNCTION(Exec)
    void HandleNextDebugTargetKey();
    
private:
    UFUNCTION(Exec)
    void DatabankShowAll(bool NewValue);
    
};

