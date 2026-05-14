#include "UWEPrototypeActor.h"
#include "UWEAbilitySystemComponent.h"
#include "UWEHealthSetComponent.h"
#include "UWEMechanicalSetComponent.h"
#include "UWEMovementSetComponent.h"
#include "UWEPhysicalSetComponent.h"
#include "UWESurvivalSetComponent.h"

AUWEPrototypeActor::AUWEPrototypeActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->UWEAbilitySystemComponent = CreateDefaultSubobject<UUWEAbilitySystemComponent>(TEXT("UWEAbilitySystemComponent"));
    this->HealthSetComponent = CreateDefaultSubobject<UUWEHealthSetComponent>(TEXT("HealthSetComponent"));
    this->MechanicalSetComponent = CreateDefaultSubobject<UUWEMechanicalSetComponent>(TEXT("MechanicalSetComponent"));
    this->MovementSetComponent = CreateDefaultSubobject<UUWEMovementSetComponent>(TEXT("MovementSetComponent"));
    this->SurvivalSetComponent = CreateDefaultSubobject<UUWESurvivalSetComponent>(TEXT("SurvivalSetComponent"));
    this->PhysicalSetComponent = CreateDefaultSubobject<UUWEPhysicalSetComponent>(TEXT("PhysicalSetComponent"));
}

void AUWEPrototypeActor::UpdateMaxSpeed() {
}


