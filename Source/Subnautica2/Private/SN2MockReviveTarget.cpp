#include "SN2MockReviveTarget.h"
#include "UWEAbilitySystemComponent.h"
#include "UWEHealthSetComponent.h"
#include "SN2ReviveableComponent.h"

ASN2MockReviveTarget::ASN2MockReviveTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->AbilitySystemComponent = CreateDefaultSubobject<UUWEAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
    this->ReviveableComponent = CreateDefaultSubobject<USN2ReviveableComponent>(TEXT("ReviveableComponent"));
    this->HealthSetComponent = CreateDefaultSubobject<UUWEHealthSetComponent>(TEXT("HealthSetComponent"));
}


