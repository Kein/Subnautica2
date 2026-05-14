#include "UWEAIPawn.h"
#include "Perception/AIPerceptionStimuliSourceComponent.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"
#include "Mercuna3DNavigationComponent.h"
#include "UWEAIMovementComponent.h"
#include "UWEAbilitySystemComponent.h"
#include "UWEBehaviorSetComponent.h"
#include "UWEHealthSetComponent.h"
#include "UWEMovementSetComponent.h"
#include "UWEPhysicalSetComponent.h"
#include "UWESurvivalSetComponent.h"
#include "UWEMercunaSurfaceNavigationComponent.h"
#include "UWENetworkSmoothingComponent.h"
#include "UWECollisionImpactComponent.h"
#include "VolumeTrackerComponent.h"
#include "Net/UnrealNetwork.h"
#include "UWEAIArchetypeComponent.h"
#include "UWEAIController.h"
#include "UWEAIGroupingComponent.h"
#include "UWEAIReplicationComponent.h"

AUWEAIPawn::AUWEAIPawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootCollisionComponent"));
    this->AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
    this->AIControllerClass = AUWEAIController::StaticClass();
    this->AttachedToOwner = NULL;
    this->IsObstacleSensed = false;
    this->RootCollisionComponent = (USceneComponent*)RootComponent;
    this->UWEAbilitySystemComponent = CreateDefaultSubobject<UUWEAbilitySystemComponent>(TEXT("UWEAbilitySystemComponent"));
    this->ArchetypeComponent = CreateDefaultSubobject<UUWEAIArchetypeComponent>(TEXT("ArchetypeComponent"));
    this->HealthComponent = CreateDefaultSubobject<UUWEHealthSetComponent>(TEXT("HealthComponent"));
    this->SurvivalComponent = CreateDefaultSubobject<UUWESurvivalSetComponent>(TEXT("SurvivalComponent"));
    this->MovementSetComponent = CreateDefaultSubobject<UUWEMovementSetComponent>(TEXT("MovementSetComponent"));
    this->PhysicalComponent = CreateDefaultSubobject<UUWEPhysicalSetComponent>(TEXT("PhysicalComponent"));
    this->BehaviorSetComponent = CreateDefaultSubobject<UUWEBehaviorSetComponent>(TEXT("BehaviorSetComponent"));
    this->MovementComponent = CreateDefaultSubobject<UUWEAIMovementComponent>(TEXT("MovementComponent"));
    this->Mercuna3DNavigation = CreateDefaultSubobject<UMercuna3DNavigationComponent>(TEXT("Mercuna3DNavigation"));
    this->MercunaSurfaceNavigation = CreateDefaultSubobject<UUWEMercunaSurfaceNavigationComponent>(TEXT("MercunaSurfaceNavigation"));
    this->NetworkSmoothingComponent = CreateDefaultSubobject<UUWENetworkSmoothingComponent>(TEXT("NetworkSmoothingComponent"));
    this->VolumeTrackerComponent = CreateDefaultSubobject<UVolumeTrackerComponent>(TEXT("VolumeTrackerComponent"));
    this->EnableSweepTestForNetworkSmoothing = true;
    this->AIPerceptionStimuliSourceComponent = CreateDefaultSubobject<UAIPerceptionStimuliSourceComponent>(TEXT("AIPerceptionStimuliSourceComponent"));
    this->CollisionImpactComponent = CreateDefaultSubobject<UUWECollisionImpactComponent>(TEXT("CollisionImpactComponent"));
    this->GroupingComponent = CreateDefaultSubobject<UUWEAIGroupingComponent>(TEXT("GroupingComponent"));
    this->ReplicationComponent = CreateDefaultSubobject<UUWEAIReplicationComponent>(TEXT("ReplicationComponent"));
    this->OverlapMode_Authority = EUWEAIPawnOverlapMode::UnrealGenerateOverlapEvents;
    this->OverlapMode_Client = EUWEAIPawnOverlapMode::Disabled;
    this->MeshComponent = NULL;
    this->PawnAttachmentOwner = NULL;
    this->DynamicMaterialInstance = NULL;
    this->VolumeTrackerComponent->SetupAttachment(RootComponent);
}

void AUWEAIPawn::UpdateMaxSpeed() {
}

void AUWEAIPawn::SetMovementStyle(FGameplayTag InMovementStyle) {
}

void AUWEAIPawn::SetEnvironmentType(FGameplayTag EnvironmentType) {
}

void AUWEAIPawn::SetDefaultMovementStyle() {
}

void AUWEAIPawn::SetDefaultEnvironmentType() {
}

void AUWEAIPawn::OnRep_IsObstacleSensed() {
}

void AUWEAIPawn::OnRangeTrackerPostUpdate() {
}

void AUWEAIPawn::OnInfectionChanged_Implementation(float Infection) {
}

void AUWEAIPawn::OnDied(AActor* SourceActor, AActor* TargetActor) {
}

void AUWEAIPawn::OnActorDetachFinished(AActor* Actor, const FName& SlotName) {
}

void AUWEAIPawn::OnActorAttachStarted(AActor* Actor, const FName& SlotName) {
}

bool AUWEAIPawn::IsRootComponentCollisionEnabled() const {
    return false;
}

bool AUWEAIPawn::IsMeshCollisionEnabled() const {
    return false;
}

bool AUWEAIPawn::IsActorCollisionEnabled() const {
    return false;
}

bool AUWEAIPawn::HasMovementStyle(FGameplayTag InMovementStyle) const {
    return false;
}

AActor* AUWEAIPawn::GetDecisionTarget() const {
    return NULL;
}

FGameplayTag AUWEAIPawn::GetCurrentMovementStyle() const {
    return FGameplayTag{};
}

UUWEAbilitySystemComponent* AUWEAIPawn::GetASC() const {
    return NULL;
}

UUWEAIReplicationComponent* AUWEAIPawn::GetAIReplicationComponent() const {
    return NULL;
}

UUWEAIGroupingComponent* AUWEAIPawn::GetAIGroupingComponent() const {
    return NULL;
}

UUWEAIArchetypeComponent* AUWEAIPawn::GetAIArchetypeComponent() const {
    return NULL;
}

void AUWEAIPawn::EnableRootComponentCollision(bool Enable) {
}

void AUWEAIPawn::EnableMeshCollision(bool Enable) {
}

void AUWEAIPawn::EnableActorCollision(bool Enable) {
}

void AUWEAIPawn::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AUWEAIPawn, IsObstacleSensed);
}


