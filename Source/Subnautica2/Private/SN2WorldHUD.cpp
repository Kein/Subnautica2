#include "SN2WorldHUD.h"
#include "UWEBiomodHUDViewModel.h"
#include "UWEPlayerAlertsViewModel.h"
#include "UWEEdgeOfWorldHUDViewModel.h"
#include "UWENotificationSystemViewModel.h"
#include "UWESaveInProgressViewModel.h"
#include "SN2AdaptationsViewModel.h"
#include "SN2AttributeGaugeViewModel.h"
#include "SN2BasePowerViewModel.h"
#include "SN2BuilderMenuViewModel.h"
#include "SN2DatabankViewModel.h"
#include "SN2DialogueViewModel.h"
#include "SN2EnergyToolViewModel.h"
#include "SN2FeedbackViewModel.h"
#include "SN2HUDViewModel.h"
#include "SN2HoverTargetViewModel.h"
#include "SN2PdaViewModel.h"
#include "SN2PingSystemViewModel.h"
#include "SN2PinnedRecipesViewModel.h"
#include "SN2PlayerHeadingViewModel.h"
#include "SN2PlayerInSubmarineViewModel.h"
#include "SN2ProximityTextPopupViewModel.h"
#include "SN2QuickSlotsBarViewModel.h"
#include "SN2RadioViewModel.h"
#include "SN2RecipesListViewModel.h"
#include "SN2ReloadPromptsViewModel.h"
#include "SN2RythmHarvestViewModel.h"
#include "SN2ScannerTargetViewModel.h"
#include "SN2SonicResonatorFrequencyViewModel.h"
#include "SN2TeamViewModel.h"
#include "SN2TimeOfDayViewModel.h"
#include "SN2TutorialViewModel.h"
#include "SN2WarningsActiveViewModel.h"

ASN2WorldHUD::ASN2WorldHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugDisplay.AddDefaulted(1);
    this->QuickSlotsBarViewModel = CreateDefaultSubobject<USN2QuickSlotsBarViewModel>(TEXT("QuickSlotsBarViewModel"));
    this->PdaViewModel = CreateDefaultSubobject<USN2PdaViewModel>(TEXT("PdaViewModel"));
    this->HUDViewModel = CreateDefaultSubobject<USN2HUDViewModel>(TEXT("HUDViewModel"));
    this->DatabankViewModel = CreateDefaultSubobject<USN2DatabankViewModel>(TEXT("DatabankViewModel"));
    this->ReloadPromptsViewModel = CreateDefaultSubobject<USN2ReloadPromptsViewModel>(TEXT("ReloadPromptsViewModel"));
    this->NotificationsViewModel = CreateDefaultSubobject<UUWENotificationSystemViewModel>(TEXT("NotificationsViewModel"));
    this->DialogueViewModel = CreateDefaultSubobject<USN2DialogueViewModel>(TEXT("DialogueViewModel"));
    this->PingSystemViewModel = CreateDefaultSubobject<USN2PingSystemViewModel>(TEXT("PingSystemViewModel"));
    this->PinnedRecipesViewModel = CreateDefaultSubobject<USN2PinnedRecipesViewModel>(TEXT("PinnedRecipesViewModel"));
    this->FabricatorRecipesListViewModel = CreateDefaultSubobject<USN2RecipesListViewModel>(TEXT("FabricatorRecipesListViewModel"));
    this->PDARecipesListViewModel = CreateDefaultSubobject<USN2RecipesListViewModel>(TEXT("PDARecipesListViewModel"));
    this->BuilderRecipesListViewModel = CreateDefaultSubobject<USN2RecipesListViewModel>(TEXT("BuilderRecipesListViewModel"));
    this->TutorialViewModel = CreateDefaultSubobject<USN2TutorialViewModel>(TEXT("TutorialViewModel"));
    this->BasePowerViewModel = CreateDefaultSubobject<USN2BasePowerViewModel>(TEXT("BasePowerViewModel"));
    this->BuilderMenuViewModel = CreateDefaultSubobject<USN2BuilderMenuViewModel>(TEXT("BuilderMenuViewModel"));
    this->PlayerInSubmarineViewModel = CreateDefaultSubobject<USN2PlayerInSubmarineViewModel>(TEXT("TridentPlayerViewModel"));
    this->PlayerHeadingViewModel = CreateDefaultSubobject<USN2PlayerHeadingViewModel>(TEXT("PlayerHeading"));
    this->BiomodOwnerViewModel = CreateDefaultSubobject<UUWEBiomodHUDViewModel>(TEXT("BiomodOwnerViewModel"));
    this->HoverTargetViewModel = CreateDefaultSubobject<USN2HoverTargetViewModel>(TEXT("HoverTargetViewModel"));
    this->ProximityTextPopupViewModel = CreateDefaultSubobject<USN2ProximityTextPopupViewModel>(TEXT("ProximityTextPopupViewModel"));
    this->SaveInProgressViewModel = CreateDefaultSubobject<UUWESaveInProgressViewModel>(TEXT("SaveSystemViewModel"));
    this->RythmHarvestViewModel = CreateDefaultSubobject<USN2RythmHarvestViewModel>(TEXT("RythmHarvestViewModel"));
    this->SonicResonatorFrequencyViewModel = CreateDefaultSubobject<USN2SonicResonatorFrequencyViewModel>(TEXT("SonicResonatorFrequencyViewModel"));
    this->ScannerTargetViewModel = CreateDefaultSubobject<USN2ScannerTargetViewModel>(TEXT("ScannerTargetViewModel"));
    this->EnergyToolViewModel = CreateDefaultSubobject<USN2EnergyToolViewModel>(TEXT("EnergyToolViewModel"));
    this->RadioViewModel = CreateDefaultSubobject<USN2RadioViewModel>(TEXT("RadioViewModel"));
    this->WarningsActiveViewModel = CreateDefaultSubobject<USN2WarningsActiveViewModel>(TEXT("WarningsActiveViewModel"));
    this->PlayerAdaptationsViewModel = CreateDefaultSubobject<USN2AdaptationsViewModel>(TEXT("PlayerAdaptationsViewModel"));
    this->PlayerAlertViewModel = CreateDefaultSubobject<UUWEPlayerAlertsViewModel>(TEXT("PlayerAlertViewModel"));
    this->AttributeGaugeViewModel = CreateDefaultSubobject<USN2AttributeGaugeViewModel>(TEXT("AttributeGuageViewModel"));
    this->EdgeOfWorldHUDViewModel = CreateDefaultSubobject<UUWEEdgeOfWorldHUDViewModel>(TEXT("EdgeOfWorldHUDViewModel"));
    this->TimeOfDayViewModel = CreateDefaultSubobject<USN2TimeOfDayViewModel>(TEXT("TimeOfDayViewModel"));
    this->TeamViewModel = CreateDefaultSubobject<USN2TeamViewModel>(TEXT("TeamViewModel"));
    this->FeedbackViewModel = CreateDefaultSubobject<USN2FeedbackViewModel>(TEXT("FeedbackViewModel"));
}

void ASN2WorldHUD::TutorialPrompt(const FString& Name) {
}

void ASN2WorldHUD::ToggleHUD() {
}

bool ASN2WorldHUD::ShouldShowHoverTargetInfoReticle() {
    return false;
}

bool ASN2WorldHUD::ShouldShowHoverTargetInfo() {
    return false;
}

void ASN2WorldHUD::RegisterGlobalViewModels() {
}

void ASN2WorldHUD::OnPlayerStateSet() {
}

void ASN2WorldHUD::OnGameStateSet() {
}

void ASN2WorldHUD::OnDisplayModeChanged() {
}

void ASN2WorldHUD::HandleShowDebugKey() {
}

void ASN2WorldHUD::HandlePreviousDebugTargetKey() {
}

void ASN2WorldHUD::HandleNextDebugTargetKey() {
}

void ASN2WorldHUD::DatabankShowAll(bool NewValue) {
}


