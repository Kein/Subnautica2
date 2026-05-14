#include "UWECarryableActorPowered.h"
#include "Engine/EngineTypes.h"
#include "UWEAbilitySystemComponent.h"
#include "UWEMechanicalSetComponent.h"
#include "UWEAssetDataComponent.h"
#include "UWEInventoryComponent.h"
#include "UWEInventoryInteractionComponent.h"
#include "UWEChaosPhysicsController.h"
#include "UWERestoreRotationComponent.h"
#include "UWESaveComponent.h"
#include "VolumeTrackerComponent.h"
#include "Net/UnrealNetwork.h"
#include "UWECarryableRootComponent.h"

AUWECarryableActorPowered::AUWECarryableActorPowered(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    const FProperty* p_PhysicsReplicationMode = GetClass()->FindPropertyByName("PhysicsReplicationMode");
    (*p_PhysicsReplicationMode->ContainerPtrToValuePtr<EPhysicsReplicationMode>(this)) = EPhysicsReplicationMode::PredictiveInterpolation;
    this->RootComponent = CreateDefaultSubobject<UUWECarryableRootComponent>(TEXT("CarryableRootComponent"));
    this->CarryableRootComponent = (UUWECarryableRootComponent*)RootComponent;
    this->AbilitySystemComponent = CreateDefaultSubobject<UUWEAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
    this->MechanicalSetComponent = CreateDefaultSubobject<UUWEMechanicalSetComponent>(TEXT("MechanicalSetComponent"));
    this->PowerInventoryComponent = CreateDefaultSubobject<UUWEInventoryComponent>(TEXT("PowerInventoryComponent"));
    this->PowerInventoryInteractionComponent = CreateDefaultSubobject<UUWEInventoryInteractionComponent>(TEXT("PowerInventoryInteractionComponent"));
    this->PhysicsControllerComponent = CreateDefaultSubobject<UUWEChaosPhysicsController>(TEXT("PhysicsControllerComponent"));
    this->RestoreRotationComponent = CreateDefaultSubobject<UUWERestoreRotationComponent>(TEXT("RestoreRotationComponent"));
    this->SaveComponent = CreateDefaultSubobject<UUWESaveComponent>(TEXT("SaveComponent"));
    this->VolumeTrackerComponent = CreateDefaultSubobject<UVolumeTrackerComponent>(TEXT("VolumeTrackerComponent"));
    this->AssetDataComponent = CreateDefaultSubobject<UUWEAssetDataComponent>(TEXT("AssetDataComponent"));
    this->bReplicatedSimulatePhysics = false;
    this->bReplicatedCollisionEnabled = true;
    this->PowerInventoryInteractionComponent->SetupAttachment(RootComponent);
    this->VolumeTrackerComponent->SetupAttachment(RootComponent);
}

void AUWECarryableActorPowered::UpdateEnergy() {
}

void AUWECarryableActorPowered::SetReplicatedSimulatePhysics(bool bNewSimulatePhysics) {
}

void AUWECarryableActorPowered::SetReplicatedCollisionEnabled(bool bNewCollisionEnabled) {
}

void AUWECarryableActorPowered::OnRootAttachmentChanged() {
}

void AUWECarryableActorPowered::OnRep_ReplicatedSimlatePhysics() {
}

void AUWECarryableActorPowered::OnRep_ReplicatedCollisionEnabled() {
}

void AUWECarryableActorPowered::OnPowerSourceRemoved(const FUWEInventoryItem& InventoryItem) {
}

void AUWECarryableActorPowered::OnPowerSourceAdded(const FUWEInventoryItem& InventoryItem) {
}

void AUWECarryableActorPowered::OnPhysicsWake(UPrimitiveComponent* SleepingComponent, FName BoneName) {
}

void AUWECarryableActorPowered::OnPhysicsSleep(UPrimitiveComponent* SleepingComponent, FName BoneName) {
}

void AUWECarryableActorPowered::OnEnergyRefilled(AActor* Who) {
}

void AUWECarryableActorPowered::OnEnergyEmpty(AActor* Who) {
}

void AUWECarryableActorPowered::NetMulticast_SetPhysicsEnabled_Implementation(bool Enabled, bool ForceToSleep) {
}

void AUWECarryableActorPowered::NetMulticast_SetCollisionResponse_Implementation(ECollisionChannel Channel, ECollisionResponse NewResponse) {
}

bool AUWECarryableActorPowered::GetIsPowered() const {
    return false;
}

void AUWECarryableActorPowered::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AUWECarryableActorPowered, bReplicatedSimulatePhysics);
    DOREPLIFETIME(AUWECarryableActorPowered, bReplicatedCollisionEnabled);
}


