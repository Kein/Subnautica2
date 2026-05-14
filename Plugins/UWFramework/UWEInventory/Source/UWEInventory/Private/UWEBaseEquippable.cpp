#include "UWEBaseEquippable.h"
#include "Components/SkeletalMeshComponent.h"

AUWEBaseEquippable::AUWEBaseEquippable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->bEquippableHasBeenPickedUp = false;
    this->EquippedMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("EquippedMesh"));
    this->CurrentWidget = NULL;
    this->SaveComponent = NULL;
    this->EquippedMesh->SetupAttachment(RootComponent);
}

void AUWEBaseEquippable::RestoreEquipmentWidget() {
}

bool AUWEBaseEquippable::IsLocallyEquipped() const {
    return false;
}

bool AUWEBaseEquippable::IsHiddenInToolbar() const {
    return false;
}

void AUWEBaseEquippable::HideEquipmentWidget() {
}

FName AUWEBaseEquippable::GetSlotSocketName() {
    return NAME_None;
}

UUWEAbilitySystemComponent* AUWEBaseEquippable::GetPlayerAbilitySystemComponent() const {
    return NULL;
}

UUWEItemType* AUWEBaseEquippable::GetEquippableItemType() const {
    return NULL;
}


