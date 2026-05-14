#include "SN2GameState.h"
#include "UWEAbilitySystemComponent.h"
#include "UWEDynamicEventsStateComponent.h"
#include "UWEEventTrackerComponent.h"
#include "UWEGameConfigComponent.h"
#include "UWEGameplayTimeComponent.h"
#include "UWEPingSystemComponent.h"
#include "UWEScannedActorsGameStateComponent.h"
#include "UWESculpturalBaseDebugComponent.h"
#include "UWESculpturalBaseGlobalsComponent.h"
#include "UWEBuilderItemsCullingComponent.h"
#include "UWEStoryGoalContainerComponent.h"
#include "UWETimeOfDayComponent.h"
#include "Net/UnrealNetwork.h"
#include "SN2BlightNodesGameStateComponent.h"

ASN2GameState::ASN2GameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameplayTimeComponent = CreateDefaultSubobject<UUWEGameplayTimeComponent>(TEXT("GameplayTimeComponent"));
    this->TimeOfDayComponent = CreateDefaultSubobject<UUWETimeOfDayComponent>(TEXT("TimeOfDayComponent"));
    this->GameSessionId = TEXT("A1010E754F1F379C24958E8B736D84B3");
    this->SonarGameId = -1;
    this->ServerBuildNumber = -1;
    this->StoryGoalContainerComponent = CreateDefaultSubobject<UUWEStoryGoalContainerComponent>(TEXT("StoryGoalContainerComponent"));
    this->GameConfigComponent = CreateDefaultSubobject<UUWEGameConfigComponent>(TEXT("GameConfigComponent"));
    this->DynamicEventsStateComponent = CreateDefaultSubobject<UUWEDynamicEventsStateComponent>(TEXT("DynamicEventsStateComponent"));
    this->SculpturalBaseDebugComponent = CreateDefaultSubobject<UUWESculpturalBaseDebugComponent>(TEXT("SculpturalBaseDebugComponent"));
    this->SculpturalBaseGlobalsComponent = CreateDefaultSubobject<UUWESculpturalBaseGlobalsComponent>(TEXT("SculpturalBaseGlobalsComponent"));
    this->PingSystemComponent = CreateDefaultSubobject<UUWEPingSystemComponent>(TEXT("PingSystemComponent"));
    this->UWEAbilitySystemComponent = CreateDefaultSubobject<UUWEAbilitySystemComponent>(TEXT("UWEAbilitySystemComponent"));
    this->EventTracker = CreateDefaultSubobject<UUWEEventTrackerComponent>(TEXT("EventTracker"));
    this->BlightNodesGameStateComponent = CreateDefaultSubobject<USN2BlightNodesGameStateComponent>(TEXT("BlightNodesGameStateComponent"));
    this->ScannedActorsGameStateComponent = CreateDefaultSubobject<UUWEScannedActorsGameStateComponent>(TEXT("ScannedActorsGameStateComponent"));
    this->BuilderItemsCullingComponent = CreateDefaultSubobject<UUWEBuilderItemsCullingComponent>(TEXT("BuilderItemsCullingComponent"));
    this->TimeOfDayComponentClass = NULL;
}

void ASN2GameState::OnSavingUnblocked() {
}

void ASN2GameState::OnSavingBlocked() {
}

void ASN2GameState::OnSaveStarted() const {
}

void ASN2GameState::OnRep_GameSessionId() {
}

void ASN2GameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASN2GameState, GameplayTimeComponent);
    DOREPLIFETIME(ASN2GameState, TimeOfDayComponent);
    DOREPLIFETIME(ASN2GameState, GameSessionId);
    DOREPLIFETIME(ASN2GameState, SonarGameId);
    DOREPLIFETIME(ASN2GameState, ServerBuildNumber);
    DOREPLIFETIME(ASN2GameState, DynamicEventsStateComponent);
    DOREPLIFETIME(ASN2GameState, PingSystemComponent);
}


