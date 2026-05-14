#include "UWEAICharacter.h"
#include "Engine/EngineTypes.h"
#include "UWEAbilitySystemComponent.h"
#include "UWEHealthSetComponent.h"
#include "UWEMovementSetComponent.h"
#include "UWEPhysicalSetComponent.h"
#include "UWESurvivalSetComponent.h"
#include "UWEAIArchetypeComponent.h"
#include "UWEAIController.h"

AUWEAICharacter::AUWEAICharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
    this->AIControllerClass = AUWEAIController::StaticClass();
    this->UWEAbilitySystemComponent = CreateDefaultSubobject<UUWEAbilitySystemComponent>(TEXT("UWEAbilitySystemComponent"));
    this->ArchetypeComponent = CreateDefaultSubobject<UUWEAIArchetypeComponent>(TEXT("ArchetypeComponent"));
    this->HealthSetComponent = CreateDefaultSubobject<UUWEHealthSetComponent>(TEXT("HealthSetComponent"));
    this->SurvivalSetComponent = CreateDefaultSubobject<UUWESurvivalSetComponent>(TEXT("SurvivalSetComponent"));
    this->MovementSetComponent = CreateDefaultSubobject<UUWEMovementSetComponent>(TEXT("MovementSetComponent"));
    this->PhysicalSetComponent = CreateDefaultSubobject<UUWEPhysicalSetComponent>(TEXT("PhysicalSetComponent"));
}

void AUWEAICharacter::UpdateMaxSpeed() {
}

UUWEAbilitySystemComponent* AUWEAICharacter::GetASC() const {
    return NULL;
}

UUWEAIArchetypeComponent* AUWEAICharacter::GetAIArchetypeComponent() const {
    return NULL;
}


