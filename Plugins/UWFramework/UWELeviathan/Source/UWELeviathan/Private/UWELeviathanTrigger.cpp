#include "UWELeviathanTrigger.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"

AUWELeviathanTrigger::AUWELeviathanTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("Trigger"));
    this->SpawnPoint = CreateDefaultSubobject<USceneComponent>(TEXT("SpawnPoint"));
    this->Trigger = (USphereComponent*)RootComponent;
    this->SpawnPoint->SetupAttachment(RootComponent);
}



void AUWELeviathanTrigger::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


