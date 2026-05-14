#include "UWESubmarine.h"
#include "Components/StaticMeshComponent.h"
#include "UWEAISpeakerComponent.h"
#include "UWEMechanicalSetComponent.h"
#include "UWEMovementSetComponent.h"
#include "UWESubmarineMovementComponent.h"
#include "UWENetworkSmoothingComponent.h"
#include "UWEPawnAttachmentOwner.h"
#include "VolumeTrackerComponent.h"
#include "Net/UnrealNetwork.h"
#include "UWESubmarineAlertStatusHandler.h"

AUWESubmarine::AUWESubmarine(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MovementCollision"));
    this->SubmarineAlertStatusHandler = CreateDefaultSubobject<UUWESubmarineAlertStatusHandler>(TEXT("SubmarineAlertStatusHandler"));
    this->HullMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("HullMesh"));
    this->AISpeakerComponent = CreateDefaultSubobject<UUWEAISpeakerComponent>(TEXT("AISpeakerComponent"));
    this->SubmarineMovement = CreateDefaultSubobject<UUWESubmarineMovementComponent>(TEXT("SubmarineMovement"));
    this->MovementSetComponent = CreateDefaultSubobject<UUWEMovementSetComponent>(TEXT("MovementSetComponent"));
    this->MechanicalSetComponent = CreateDefaultSubobject<UUWEMechanicalSetComponent>(TEXT("MechanicalSetComponent"));
    this->PilotComponent = NULL;
    this->bControlled = false;
    this->bControllingAllowed = true;
    this->AttachmentOwnerComponent = CreateDefaultSubobject<UUWEPawnAttachmentOwner>(TEXT("PawnAttachmentOwner"));
    this->MovementCollision = (UStaticMeshComponent*)RootComponent;
    this->VolumeTracker = CreateDefaultSubobject<UVolumeTrackerComponent>(TEXT("VolumeTracker"));
    this->NetworkSmoothingComponent = CreateDefaultSubobject<UUWENetworkSmoothingComponent>(TEXT("NetworkSmoothingComponent"));
    this->HullMesh->SetupAttachment(RootComponent);
    this->VolumeTracker->SetupAttachment(RootComponent);
}

void AUWESubmarine::Wreck() {
}

void AUWESubmarine::UpdateMaxSpeed() {
}

void AUWESubmarine::RepairAll() {
}

void AUWESubmarine::OnEnergyRefilled(AActor* Who) {
}

void AUWESubmarine::OnEnergyEmpty(AActor* Who) {
}

void AUWESubmarine::DetachPilot_Implementation(APawn* Pilot) {
}

void AUWESubmarine::DefloodAll() {
}

void AUWESubmarine::AttachPilot_Implementation(APawn* Pilot) {
}

void AUWESubmarine::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AUWESubmarine, bControlled);
    DOREPLIFETIME(AUWESubmarine, bControllingAllowed);
}


