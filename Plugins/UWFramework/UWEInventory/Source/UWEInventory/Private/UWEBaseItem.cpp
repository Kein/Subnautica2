#include "UWEBaseItem.h"
#include "Engine/EngineTypes.h"
#include "Components/StaticMeshComponent.h"
#include "UWEChaosPhysicsController.h"
#include "VolumeTrackerComponent.h"
#include "Net/UnrealNetwork.h"

AUWEBaseItem::AUWEBaseItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    const FProperty* p_PhysicsReplicationMode = GetClass()->FindPropertyByName("PhysicsReplicationMode");
    (*p_PhysicsReplicationMode->ContainerPtrToValuePtr<EPhysicsReplicationMode>(this)) = EPhysicsReplicationMode::PredictiveInterpolation;
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->Tags.AddDefaulted(1);
    this->PhysicsController = CreateDefaultSubobject<UUWEChaosPhysicsController>(TEXT("PhysicsController"));
    this->VolumeTrackerComponent = CreateDefaultSubobject<UVolumeTrackerComponent>(TEXT("VolumeTrackerComponent"));
    this->UWEItemMaxAutoPickupTime = 1.00f;
    this->UWEItemMagnetismInterpSpeed = 6.00f;
    this->UWEItemMagnetismDistance = 50.00f;
    this->MagnetismMinDistance = 0.00f;
    this->UWEItemMagnetismRemoteClientDelay = 0.30f;
    this->PickupDisabled = false;
    this->AutoPickupDisabled = false;
    this->ItemType = NULL;
    this->bHasBeenPickedUp = false;
    this->Mesh = (UStaticMeshComponent*)RootComponent;
    this->ItemPickupCooldown = 0.50f;
    this->bReplicatedSimulatePhysics = false;
    this->bReplicatedCollisionEnabled = true;
    this->VolumeTrackerComponent->SetupAttachment(RootComponent);
}

void AUWEBaseItem::ThrowForward(AActor* ThrowingActor, FVector Direction, float Magnitude) {
}

void AUWEBaseItem::StopSimulateMagnetism() {
}

void AUWEBaseItem::SimulateMagnetism(AActor* ToActor) {
}

void AUWEBaseItem::SetReplicatedSimulatePhysics(bool bNewSimulatePhysics) {
}

void AUWEBaseItem::SetReplicatedCollisionEnabled(bool bNewCollisionEnabled) {
}

void AUWEBaseItem::SetDropped() {
}

void AUWEBaseItem::OnRep_ReplicatedSimlatePhysics() {
}

void AUWEBaseItem::OnRep_ReplicatedCollisionEnabled() {
}

void AUWEBaseItem::OnPhysicsWake(UPrimitiveComponent* SleepingComponent, FName BoneName) {
}

void AUWEBaseItem::OnPhysicsSleep(UPrimitiveComponent* SleepingComponent, FName BoneName) {
}

void AUWEBaseItem::NetMulticast_SetPhysicsEnabled_Implementation(bool Enabled, bool ForceToSleep) {
}

void AUWEBaseItem::NetMulticast_SetCollisionResponse_Implementation(ECollisionChannel Channel, ECollisionResponse NewResponse) {
}

bool AUWEBaseItem::IsOwned() const {
    return false;
}

bool AUWEBaseItem::IsEquippedByLocalPawn() const {
    return false;
}

bool AUWEBaseItem::IsEquipped() const {
    return false;
}

bool AUWEBaseItem::HasMagnet() const {
    return false;
}

UMeshComponent* AUWEBaseItem::GetEquippedMesh() {
    return NULL;
}

FGameplayCueParameters AUWEBaseItem::GetDefaultCueParams() {
    return FGameplayCueParameters{};
}

USkeletalMeshComponent* AUWEBaseItem::GetCharacterMesh() const {
    return NULL;
}

USceneComponent* AUWEBaseItem::GetAttachTarget(const AActor* Actor) {
    return NULL;
}

void AUWEBaseItem::ExecuteItemGameplayCue_NonReplicated(FGameplayTag Tag) {
}

void AUWEBaseItem::BPOnUnequipped_Implementation(const AActor* OldEquippedByActor) {
}

void AUWEBaseItem::BPOnHolstered_Implementation(const AActor* OldEquippedByActor) {
}

void AUWEBaseItem::BPOnEquipVisibilityChanged_Implementation(bool bNewVisible) {
}

void AUWEBaseItem::BPOnEquipped_Implementation(bool bFirstEquip) {
}

void AUWEBaseItem::AddImpulseAwayRandom(const AActor* FromActor, const float SpawnImpulse) {
}

void AUWEBaseItem::AddImpulseAway(const AActor* FromActor, const float SpawnImpulse) {
}

void AUWEBaseItem::AddImpulse(const FVector& Impulse, bool Normalized) {
}

void AUWEBaseItem::AddExternalInfluence(EUWEMovementComponentInfluenceType InfluenceType, const FVector& Value) {
}

void AUWEBaseItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AUWEBaseItem, bReplicatedSimulatePhysics);
    DOREPLIFETIME(AUWEBaseItem, bReplicatedCollisionEnabled);
}


