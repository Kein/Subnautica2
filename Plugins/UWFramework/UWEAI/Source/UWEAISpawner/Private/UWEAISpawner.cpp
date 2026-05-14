#include "UWEAISpawner.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

AUWEAISpawner::AUWEAISpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComp"));
    this->Count = 0;
    this->bAutoSpawnOnBeginPlay = true;
    this->SpawningCountScale = 1.00f;
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
    this->BoxComponent->SetupAttachment(RootComponent);
}

void AUWEAISpawner::OnWorldBeingTearDown(UWorld* World) {
}

void AUWEAISpawner::DoStopLogic() {
}

void AUWEAISpawner::DoStartLogic() {
}

void AUWEAISpawner::DoSpawning() {
}

void AUWEAISpawner::DoDespawning() {
}


