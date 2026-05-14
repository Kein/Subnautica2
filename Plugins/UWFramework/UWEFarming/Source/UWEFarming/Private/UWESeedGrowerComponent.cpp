#include "UWESeedGrowerComponent.h"

UUWESeedGrowerComponent::UUWESeedGrowerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Mobility = EComponentMobility::Static;
    this->SpawnType = EUWESeedSpawnType::Repeat;
    this->bStartsGrown = true;
    this->HighPrioritySpawn = false;
    this->SpawnRate = 120.00f;
    this->SpawnTimeVariance = 40.00f;
    this->RipenTime = 80.00f;
    this->RipenFunction = EUWEGrowthFunction::EaseOut;
    this->MinScale = 0.00f;
    this->Replicator = NULL;
    this->bInitiallySpawned = false;
    this->bSeedPresent = false;
    this->SaveHandle = NULL;
    this->SpawnTimerStartTime = 0.00f;
    this->SpawnedSeedClassIndex = -1;
    this->ShowRipeningProgress = false;
    this->SeedProgressInteractComponent = NULL;
}

void UUWESeedGrowerComponent::TryDropSeed(bool bGrowNewSeed) {
}

void UUWESeedGrowerComponent::TryDestroySeed(bool bGrowNewSeed) {
}

void UUWESeedGrowerComponent::StopSpawnTimer() {
}

void UUWESeedGrowerComponent::StartSpawnTimer() {
}

void UUWESeedGrowerComponent::SpawnSeed(bool bSpawnFullyRipened) {
}

bool UUWESeedGrowerComponent::ShowProgress() const {
    return false;
}

void UUWESeedGrowerComponent::SetGrowthRate(float NewGrowthRate) {
}

void UUWESeedGrowerComponent::OnSetLifeSpanSeed() {
}

void UUWESeedGrowerComponent::OnPickedUpSeed(AActor* PickupActor) {
}

void UUWESeedGrowerComponent::OnPhysicsWakeSeed(UPrimitiveComponent* WakingComponent, FName BoneName) {
}

void UUWESeedGrowerComponent::OnOwnerDied(AActor* SourceActor, AActor* TargetActor) {
}

void UUWESeedGrowerComponent::OnDestroySeed(AActor* DestroyedActor) {
}

bool UUWESeedGrowerComponent::IsPlantFullyGrown() const {
    return false;
}

bool UUWESeedGrowerComponent::IsInFarmTray() const {
    return false;
}

bool UUWESeedGrowerComponent::HasSeed() const {
    return false;
}

bool UUWESeedGrowerComponent::HasFullyRipenedSeed() const {
    return false;
}

float UUWESeedGrowerComponent::GetTimeRemaining() const {
    return 0.0f;
}

AActor* UUWESeedGrowerComponent::GetSeedActor() const {
    return NULL;
}

float UUWESeedGrowerComponent::GetRipenedAmount() const {
    return 0.0f;
}


