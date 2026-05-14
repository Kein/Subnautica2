#include "SN2Tadpole.h"
#include "Components/SkeletalMeshComponent.h"
#include "UWEInventoryComponent.h"
#include "UWEInventoryInteractionComponent.h"
#include "UWELocalVelocitySampler.h"
#include "Net/UnrealNetwork.h"
#include "SN2CollisionDamageComponent.h"
#include "SN2TadpoleInventoryRouterComponent.h"

ASN2Tadpole::ASN2Tadpole(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultBankingModifier = 0.40f;
    this->DefaultStrafeSpeedModifier = 0.80f;
    this->DefaultSwimmingFriction = 0.50f;
    this->LeftExhaust = CreateDefaultSubobject<UUWELocalVelocitySampler>(TEXT("LeftExhaust"));
    const FProperty* p_Mesh_Parent = GetClass()->FindPropertyByName("Mesh");
    this->RightExhaust = CreateDefaultSubobject<UUWELocalVelocitySampler>(TEXT("RightExhaust"));
    this->BottomExhaust = CreateDefaultSubobject<UUWELocalVelocitySampler>(TEXT("BottomExhaust"));
    this->RearExhaust = CreateDefaultSubobject<UUWELocalVelocitySampler>(TEXT("RearExhaust"));
    this->CollisionDamageComponent = CreateDefaultSubobject<USN2CollisionDamageComponent>(TEXT("CollisionDamageComponent"));
    this->SignalActorClass = NULL;
    this->InventoryRouterComponent = CreateDefaultSubobject<USN2TadpoleInventoryRouterComponent>(TEXT("InventoryRouterComponent"));
    this->PowerInventoryComponent = CreateDefaultSubobject<UUWEInventoryComponent>(TEXT("PowerInventoryComponent"));
    this->UpgradeInventoryComponent = CreateDefaultSubobject<UUWEInventoryComponent>(TEXT("UpgradeInventoryComponent"));
    this->PowerInventoryInteraction = CreateDefaultSubobject<UUWEInventoryInteractionComponent>(TEXT("PowerInventoryInteraction"));
    this->UpgradeInventoryInteraction = CreateDefaultSubobject<UUWEInventoryInteractionComponent>(TEXT("UpgradeInventoryInteraction"));
    this->CurrentChassis = NULL;
    this->ChassisDepenetrationAcceleration = 350.00f;
    this->MovementType = EUWEVehicleMovementType::Submersible;
    this->SignalActor = NULL;
    this->OverlappingChassis = NULL;
    this->AttachChassisAtBeginPlay = NULL;
    this->BottomExhaust->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->LeftExhaust->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->PowerInventoryInteraction->SetupAttachment(RootComponent);
    this->RearExhaust->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->RightExhaust->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->UpgradeInventoryInteraction->SetupAttachment(RootComponent);
}

void ASN2Tadpole::UpdateEnergy() {
}

void ASN2Tadpole::SetSignalActive(bool bActive) {
}

void ASN2Tadpole::SetMovemenType(EUWEVehicleMovementType InMovementType) {
}

void ASN2Tadpole::OnUpgradeRemoved(const FUWEInventoryItem& InventoryItem) {
}

void ASN2Tadpole::OnUpgradeAdded(const FUWEInventoryItem& InventoryItem) {
}


void ASN2Tadpole::OnRep_MovementType(EUWEVehicleMovementType OldMovementType) {
}

void ASN2Tadpole::OnRep_CurrentChassis(AActor* OldChassis) {
}

void ASN2Tadpole::OnPowerCellRemoved(const FUWEInventoryItem& InventoryItem) {
}

void ASN2Tadpole::OnPowerCellAdded(const FUWEInventoryItem& InventoryItem) {
}


EUWEVehicleMovementType ASN2Tadpole::GetMovementType() const {
    return EUWEVehicleMovementType::Submersible;
}

AActor* ASN2Tadpole::GetCurrentChassis() const {
    return NULL;
}

float ASN2Tadpole::GetBankingModifier() const {
    return 0.0f;
}

void ASN2Tadpole::DetachCurrentChassis() {
}

void ASN2Tadpole::AttachChassis(AActor* InChassis) {
}

void ASN2Tadpole::AddInputRotator(const FRotator& InRotator) {
}

void ASN2Tadpole::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASN2Tadpole, CurrentChassis);
    DOREPLIFETIME(ASN2Tadpole, MovementType);
}


