#include "SN2PossessableVehicle.h"
#include "Camera/CameraComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "UWEAbilitySystemComponent.h"
#include "UWEHealthSetComponent.h"
#include "UWEMechanicalSetComponent.h"
#include "UWEMovementSetComponent.h"
#include "UWEPawnAttachmentOwner.h"
#include "VolumeTrackerComponent.h"
#include "Net/UnrealNetwork.h"
#include "SN2OutOfBoundsCheckComponent.h"
#include "SN2PilotVehicleComponent.h"

ASN2PossessableVehicle::ASN2PossessableVehicle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->UWEAbilitySystemComponent = CreateDefaultSubobject<UUWEAbilitySystemComponent>(TEXT("UWEAbilitySystemComponent"));
    this->AttachmentOwnerComponent = CreateDefaultSubobject<UUWEPawnAttachmentOwner>(TEXT("PawnAttachmentOwner"));
    this->FirstPersonCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
    const FProperty* p_Mesh_Parent = GetClass()->FindPropertyByName("Mesh");
    this->VolumeTracker = CreateDefaultSubobject<UVolumeTrackerComponent>(TEXT("VolumeTracker"));
    this->HealthSetComponent = CreateDefaultSubobject<UUWEHealthSetComponent>(TEXT("HealthSetComponent"));
    this->MechanicalSetComponent = CreateDefaultSubobject<UUWEMechanicalSetComponent>(TEXT("MechanicalSetComponent"));
    this->MovementSetComponent = CreateDefaultSubobject<UUWEMovementSetComponent>(TEXT("MovementSetComponent"));
    this->PilotVehicleInteraction = CreateDefaultSubobject<USN2PilotVehicleComponent>(TEXT("PilotVehicleInteraction"));
    this->OutOfBoundsCheckComponent = CreateDefaultSubobject<USN2OutOfBoundsCheckComponent>(TEXT("OutOfBoundsCheckComponent"));
    this->Pilot = NULL;
    this->CurrentWidget = NULL;
    this->ExplodeDamage = 30.00f;
    this->ExplodeRadius = 350.00f;
    this->ExplodePushback = 900.00f;
    this->bIsAttaching = false;
    this->bBroken = false;
    this->FirstPersonCamera->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->PilotVehicleInteraction->SetupAttachment(RootComponent);
    this->VolumeTracker->SetupAttachment(RootComponent);
}

void ASN2PossessableVehicle::StopPilotWithoutInputAtRequestedLocation(const TArray<FVector>& RequestedEjectLocations) {
}

void ASN2PossessableVehicle::StopPilotWithoutInput() {
}

void ASN2PossessableVehicle::StopPilot(const FInputActionValue& InputActionValue) {
}

void ASN2PossessableVehicle::StartPilot(AController* InteractingController) {
}

void ASN2PossessableVehicle::SetIsBroken(bool bInBroken) {
}

void ASN2PossessableVehicle::Server_InitiateDetachmentFromAttachmentOwner_Implementation() {
}

void ASN2PossessableVehicle::RequestStopPiloting_Implementation(const TArray<FVector>& RequestedEjectLocations) {
}

void ASN2PossessableVehicle::OnRep_Pilot(APawn* OldPilot) {
}

void ASN2PossessableVehicle::OnRep_Broken() const {
}



void ASN2PossessableVehicle::OnMaxSpeedChanged() {
}

void ASN2PossessableVehicle::OnFullyHealedVehicle(AActor* SourceActor, AActor* TargetActor) {
}

void ASN2PossessableVehicle::OnEnergyRefilled(AActor* Who) {
}

void ASN2PossessableVehicle::OnEnergyEmpty(AActor* Who) {
}

void ASN2PossessableVehicle::OnDiedVehicle(AActor* SourceActor, AActor* TargetActor) {
}

void ASN2PossessableVehicle::OnDiedPlayer(AActor* SourceActor, AActor* TargetActor) {
}

void ASN2PossessableVehicle::OnDetachFinished(AActor* Attachment, const FName& SlotName) {
}

void ASN2PossessableVehicle::OnAttachFinished(AActor* Attachment, const FName& SlotName) {
}


bool ASN2PossessableVehicle::IsPiloted() const {
    return false;
}

bool ASN2PossessableVehicle::IsBroken() const {
    return false;
}

USN2PilotVehicleComponent* ASN2PossessableVehicle::GetPilotVehicleInteraction() const {
    return NULL;
}

AActor* ASN2PossessableVehicle::GetPilot() const {
    return NULL;
}

bool ASN2PossessableVehicle::GetIsPowered() const {
    return false;
}

void ASN2PossessableVehicle::DetachAllExceptPilot() {
}

void ASN2PossessableVehicle::DebugStopPilotingAndDestroy() {
}

void ASN2PossessableVehicle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASN2PossessableVehicle, Pilot);
    DOREPLIFETIME(ASN2PossessableVehicle, bBroken);
}


