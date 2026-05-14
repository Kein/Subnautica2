#include "SN2PlayerState.h"
#include "UWEAIDirectorPlayerStateComponent.h"
#include "UWEEventRecorderComponent.h"
#include "UWEDialoguePDASpeakerComponent.h"
#include "UWEPDAVOPlaybackPlayerStateComponent.h"
#include "UWEEventTrackerComponent.h"
#include "UWEGameCaptureComponent.h"
#include "UWEInGameCurrencyPlayerStateComponent.h"
#include "UWENotificationComponent.h"
#include "UWEPingPlayerStateComponent.h"
#include "UWEPinnedRecipesPlayerStateComponent.h"
#include "UWESaveComponent.h"
#include "UWEScannedActorsComponent.h"
#include "UWESonarPlayerStateComponent.h"
#include "UWEStoryGoalContainerComponent.h"
#include "UWEStoryGoalPollingPlayerStateComponent.h"
#include "UWETriggeredNotificationsComponent.h"
#include "Net/UnrealNetwork.h"
#include "SN2AdaptationsPlayerStateComponent.h"
#include "SN2BuilderToolComponent.h"
#include "SN2ComputerCoreTrackerComponent.h"
#include "SN2DebugCommandComponent.h"
#include "SN2PlayerUpgradesPlayerStateComponent.h"
#include "SN2RadioComponent.h"
#include "SN2UnlockPlayerStateComponent.h"

ASN2PlayerState::ASN2PlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SelectedTarget = NULL;
    this->SaveComponent = CreateDefaultSubobject<UUWESaveComponent>(TEXT("SaveComponent"));
    this->DialoguePDASpeakerComponent = CreateDefaultSubobject<UUWEDialoguePDASpeakerComponent>(TEXT("DialoguePDASpeakerComponent"));
    this->DialoguePlaybackComponent = CreateDefaultSubobject<UUWEPDAVOPlaybackPlayerStateComponent>(TEXT("DialoguePlaybackComponent"));
    this->StoryGoalContainerComponent = CreateDefaultSubobject<UUWEStoryGoalContainerComponent>(TEXT("StoryGoalContainerComponent"));
    this->BuilderToolComponent = CreateDefaultSubobject<USN2BuilderToolComponent>(TEXT("BuilderComponent"));
    this->ComputerCoreTrackerComponent = CreateDefaultSubobject<USN2ComputerCoreTrackerComponent>(TEXT("Computer Core Tracker"));
    this->NotificationComponent = CreateDefaultSubobject<UUWENotificationComponent>(TEXT("NotificationComponent"));
    this->DebugCommandComponent = CreateDefaultSubobject<USN2DebugCommandComponent>(TEXT("DebugCommandComponent"));
    this->ScannedActorsComponent = CreateDefaultSubobject<UUWEScannedActorsComponent>(TEXT("Scanned Actors"));
    this->SonarComponent = CreateDefaultSubobject<UUWESonarPlayerStateComponent>(TEXT("Sonar Component"));
    this->GameCaptureComponent = CreateDefaultSubobject<UUWEGameCaptureComponent>(TEXT("GameCaptureComponent"));
    this->UnlockPlayerStateComponent = CreateDefaultSubobject<USN2UnlockPlayerStateComponent>(TEXT("UnlockPlayerStateComponent"));
    this->TriggeredNotificationsComponent = CreateDefaultSubobject<UUWETriggeredNotificationsComponent>(TEXT("TriggeredNotificationsComponent"));
    this->RadioComponent = CreateDefaultSubobject<USN2RadioComponent>(TEXT("RadioComponent"));
    this->AdaptationsComponent = CreateDefaultSubobject<USN2AdaptationsPlayerStateComponent>(TEXT("AdaptationsComponent"));
    this->PlayerUpgradesComponent = CreateDefaultSubobject<USN2PlayerUpgradesPlayerStateComponent>(TEXT("PlayerUpgradesComponent"));
    this->PinnedRecipesComponent = CreateDefaultSubobject<UUWEPinnedRecipesPlayerStateComponent>(TEXT("PinnedRecipesComponent"));
    this->StoryGoalPollingComponent = CreateDefaultSubobject<UUWEStoryGoalPollingPlayerStateComponent>(TEXT("StoryGoalPollingComponent"));
    this->PingPlayerStateComponent = CreateDefaultSubobject<UUWEPingPlayerStateComponent>(TEXT("PingPlayerStateComponent"));
    this->EventRecorderComponent = CreateDefaultSubobject<UUWEEventRecorderComponent>(TEXT("Event Recorder"));
    this->EventTrackerComponent = CreateDefaultSubobject<UUWEEventTrackerComponent>(TEXT("EventTracker"));
    this->InGameCurrencyComponent = CreateDefaultSubobject<UUWEInGameCurrencyPlayerStateComponent>(TEXT("InGameCurrencyComponent"));
    this->AIDirectorComponent = CreateDefaultSubobject<UUWEAIDirectorPlayerStateComponent>(TEXT("AIDirectorComponent"));
    this->SessionTimeActiveSeconds = 0.00f;
    this->GATAHoverTarget = NULL;
    this->bWasApplicationForeground = true;
    this->bWasAFK = false;
    this->StatusEventIntervalSeconds = 10.00f;
}

void ASN2PlayerState::SetClientSessionInfo_Implementation(FUWEClientSessionInfo InClientSessionInfo) {
}

void ASN2PlayerState::SendPlayerStatusEvent() {
}

void ASN2PlayerState::OnRep_CustomizationSet() {
}

void ASN2PlayerState::InitAnalytics() {
}

USN2TeamMemberViewModel* ASN2PlayerState::GetTeamMemberViewModel() const {
    return NULL;
}

ASN2PlayerController* ASN2PlayerState::GetPC() const {
    return NULL;
}

ASN2GameplayAbilityTargetActor_HoverTarget* ASN2PlayerState::GetGATAHoverTarget() {
    return NULL;
}

FUWEPlayerCustomizationSet ASN2PlayerState::GetCustomizationSet() const {
    return FUWEPlayerCustomizationSet{};
}

UUWEAbilitySystemComponent* ASN2PlayerState::GetASC() const {
    return NULL;
}

void ASN2PlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASN2PlayerState, SelectedTarget);
    DOREPLIFETIME(ASN2PlayerState, HoverTarget);
    DOREPLIFETIME(ASN2PlayerState, ClientSessionInfo);
    DOREPLIFETIME(ASN2PlayerState, CustomizationSet);
    DOREPLIFETIME(ASN2PlayerState, PlatformUniqueNetId);
    DOREPLIFETIME(ASN2PlayerState, ScannedActorTags);
}


