#include "SN2Trident.h"
#include "Components/SceneComponent.h"
#include "Components/SpotLightComponent.h"
#include "UWEAbilitySystemComponent.h"
#include "UWEFMODAudioComponent.h"
#include "UWECollisionImpactComponent.h"
#include "Net/UnrealNetwork.h"
#include "SN2SubmarineAlertManager.h"
#include "SN2SubmarineDamageComponent.h"
#include "SN2SubmarineFloodManager.h"

ASN2Trident::ASN2Trident(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SubmarineDamageComponent = CreateDefaultSubobject<USN2SubmarineDamageComponent>(TEXT("SubmarineDamageComponent"));
    this->FloodManager = CreateDefaultSubobject<USN2SubmarineFloodManager>(TEXT("FloodManager"));
    this->AlertManager = CreateDefaultSubobject<USN2SubmarineAlertManager>(TEXT("AlertManager"));
    this->AmbienceSound = CreateDefaultSubobject<UUWEFMODAudioComponent>(TEXT("AmbienceSound"));
    this->EngineSound = CreateDefaultSubobject<UUWEFMODAudioComponent>(TEXT("EngineSound"));
    this->AccelerationParamName = TEXT("trident_vehicle_acceleration");
    this->VelocityParamName = TEXT("trident_vehicle_velocity");
    this->RotVelocityParamName = TEXT("trident_rotational_velocity");
    this->CollisionImpactComponent = CreateDefaultSubobject<UUWECollisionImpactComponent>(TEXT("CollisionImpactComponent"));
    this->InputMappingContext = NULL;
    this->InputMappingPriority = 0;
    this->UWEAbilitySystemComponent = CreateDefaultSubobject<UUWEAbilitySystemComponent>(TEXT("UWEAbilitySystemComponent"));
    this->FrontalLight = CreateDefaultSubobject<USpotLightComponent>(TEXT("FrontalLight"));
    this->bFrontalLightActive = true;
    this->WreckDamagePoints = CreateDefaultSubobject<USceneComponent>(TEXT("WreckDamagePoints"));
    this->bPiloting = false;
    this->NumPlayersOnBoard = 0;
    this->AmbienceSound->SetupAttachment(RootComponent);
    this->EngineSound->SetupAttachment(RootComponent);
    this->FrontalLight->SetupAttachment(RootComponent);
    this->WreckDamagePoints->SetupAttachment(RootComponent);
}

bool ASN2Trident::TryDock(ASN2PossessableVehicle* Vehicle) {
    return false;
}

void ASN2Trident::RemoveAlert(FAlertInstHandle& InstHandle) {
}

FAlertInstHandle ASN2Trident::PlayAlert(USN2SubmarineAlert* Alert, bool IgnorePreexistingCooldown) {
    return FAlertInstHandle{};
}

void ASN2Trident::OnRep_NumPlayersOnBoard() {
}

void ASN2Trident::OnRep_FrontalLightActive() {
}


void ASN2Trident::OnMisalignSensor(FGameplayTag GameplayTag, int32 TagCount) {
}

void ASN2Trident::OnDealLeviathanBite(FGameplayTag GameplayTag, int32 TagCount) {
}




void ASN2Trident::OnAttachmentPawnDetached(AActor* Pawn, const FName& SlotName) {
}

void ASN2Trident::OnAttachmentPawnAttached(AActor* Pawn, const FName& SlotName) {
}

bool ASN2Trident::IsSubsystemActive(const FGameplayTag& SubsystemTag) const {
    return false;
}

bool ASN2Trident::IsPointInterior(const FVector& Location) const {
    return false;
}

bool ASN2Trident::IsInVoid() const {
    return false;
}

TArray<ACharacter*> ASN2Trident::GetOnboardPlayers() {
    return TArray<ACharacter*>();
}

int32 ASN2Trident::GetNumPlayers() {
    return 0;
}

float ASN2Trident::GetEnergyPercentage() const {
    return 0.0f;
}

void ASN2Trident::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASN2Trident, bFrontalLightActive);
    DOREPLIFETIME(ASN2Trident, NumPlayersOnBoard);
}


