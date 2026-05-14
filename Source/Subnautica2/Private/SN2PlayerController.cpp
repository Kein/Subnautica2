#include "SN2PlayerController.h"
#include "UWEVideoTourComponent.h"
#include "UWEGameplayMessageRouterComponent.h"
#include "UWEInteractComponent.h"
#include "UWEPingSystemCommandComponent.h"
#include "UWESaveCommunicationComponent.h"
#include "UWEBaseReplicatorComponent.h"
#include "UWESonarCommunicationComponent.h"
#include "UWEStoryGoalCommandComponent.h"
#include "UWESubmarinePilotComponent.h"
#include "SN2BaseScannerInteractionComponent.h"
#include "SN2GameStateCommandComponent.h"
#include "SN2PlayerCustomizationControllerComponent.h"
#include "Templates/SubclassOf.h"

ASN2PlayerController::ASN2PlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StreamingSourceShapes.AddDefaulted(1);
    this->ClickEventKeys.AddDefaulted(1);
    this->SaveCommunication = CreateDefaultSubobject<UUWESaveCommunicationComponent>(TEXT("SaveCommunication"));
    this->GameStateCommandComponent = CreateDefaultSubobject<USN2GameStateCommandComponent>(TEXT("GameStateCommandComponent"));
    this->PingSystemCommandComponent = CreateDefaultSubobject<UUWEPingSystemCommandComponent>(TEXT("PingSystemCommandComponent"));
    this->StoryGoalCommandComponent = CreateDefaultSubobject<UUWEStoryGoalCommandComponent>(TEXT("StoryGoalCommandComponent"));
    this->BaseScannerInteractionComponent = CreateDefaultSubobject<USN2BaseScannerInteractionComponent>(TEXT("BaseScannerInteractionComponent"));
    this->SonarCommunicationComponent = CreateDefaultSubobject<UUWESonarCommunicationComponent>(TEXT("SonarCommunicationComponent"));
    this->PlayerCustomizationComponent = CreateDefaultSubobject<USN2PlayerCustomizationControllerComponent>(TEXT("PlayerCustomizationComponent"));
    this->VideoTourComponent = CreateDefaultSubobject<UUWEVideoTourComponent>(TEXT("VideoTourComponent"));
    this->InteractComp = CreateDefaultSubobject<UUWEInteractComponent>(TEXT("InteractComponent"));
    this->GameplayMessageRouterComponent = CreateDefaultSubobject<UUWEGameplayMessageRouterComponent>(TEXT("GameplayMessageRouter"));
    this->BaseReplicatorComponent = CreateDefaultSubobject<UUWEBaseReplicatorComponent>(TEXT("BaseReplicator"));
    this->PilotComponent = CreateDefaultSubobject<UUWESubmarinePilotComponent>(TEXT("PilotComponent"));
    this->DebugTarget = NULL;
    this->CurrentPerspective = ESN2PlayerPerspective::Undefined;
    this->CameraOffset = 250.00f;
    this->bPlayerStateAcknowledged = false;
    this->bInitialPawnRestartDelayed = false;
}

void ASN2PlayerController::ToggleThirdPerson() {
}

void ASN2PlayerController::TogglePlayerCharacterVisibility() {
}


void ASN2PlayerController::ServerSetDebugTarget_Implementation(AActor* InDebugTarget) {
}
bool ASN2PlayerController::ServerSetDebugTarget_Validate(AActor* InDebugTarget) {
    return true;
}

void ASN2PlayerController::ServerCheat_Implementation(const FString& Command) {
}
bool ASN2PlayerController::ServerCheat_Validate(const FString& Command) {
    return true;
}

void ASN2PlayerController::ServerAcknowledgePlayerState_Implementation() {
}

void ASN2PlayerController::Server_SelectCharacterCustomized_Implementation(FUWEPlayerCustomizationSet CustomizationSet) {
}

void ASN2PlayerController::Server_SelectCharacter_Implementation(const TSoftObjectPtr<UUWEPlayerCustomizationSetDA>& CustomizationSet) {
}

void ASN2PlayerController::OnWidgetPushed(EUWEWindowManagerLayer LayerId, bool IsFirst, TSubclassOf<UCommonActivatableWidget> WidgetClass) {
}

void ASN2PlayerController::OnWidgetPopped(EUWEWindowManagerLayer LayerId, bool IsLast, TSubclassOf<UCommonActivatableWidget> WidgetClass) {
}


void ASN2PlayerController::OnPossessedPawnChangedFunction(APawn* PawnOld, APawn* PawnNew) {
}


void ASN2PlayerController::OnBaseReplicationComplete() {
}

bool ASN2PlayerController::IsNetworkConnected() const {
    return false;
}

void ASN2PlayerController::InitialPawnRestartReady_Implementation() {
}

void ASN2PlayerController::InitialPawnRestartDelayed_Implementation() {
}

void ASN2PlayerController::HandleClientNetworkFailure(UWorld* InWorld, UNetDriver* NetDriver, ENetworkFailure::Type FailureType, const FString& ErrorString) {
}

ASN2PlayerCharacter* ASN2PlayerController::GetSN2PlayerCharacter() {
    return NULL;
}

ASN2PlayerState* ASN2PlayerController::GetPS() const {
    return NULL;
}

UUWEAbilitySystemComponent* ASN2PlayerController::GetASC() const {
    return NULL;
}

void ASN2PlayerController::ClientPushScreenToLayer_Implementation(TSubclassOf<UCommonActivatableWidget> ActivatableWidgetClass, EUWEWindowManagerLayer Layer) {
}

void ASN2PlayerController::Cheat(const FString& Command) {
}


