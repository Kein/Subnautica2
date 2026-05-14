#include "SN2AbilitySystemStatics.h"

USN2AbilitySystemStatics::USN2AbilitySystemStatics() {
}

bool USN2AbilitySystemStatics::IsAvatarActorAttached(const UUWEGameplayAbility* GameplayAbility, UUWEPawnAttachmentOwner*& OutAttachedToActor) {
    return false;
}

bool USN2AbilitySystemStatics::HasToolEquipped(const UUWEGameplayAbility* GameplayAbility, TSoftClassPtr<AActor> ActorSoftClass) {
    return false;
}

bool USN2AbilitySystemStatics::HasAnyToolEquipped(const UUWEGameplayAbility* GameplayAbility) {
    return false;
}

AUWEBaseItem* USN2AbilitySystemStatics::GetToolFromAbilityActorInfo(const UUWEGameplayAbility* GameplayAbility) {
    return NULL;
}

UUWEToolbarComponent* USN2AbilitySystemStatics::GetToolbarFromAbilityActorInfo(const UUWEGameplayAbility* GameplayAbility) {
    return NULL;
}

ASN2PlayerState* USN2AbilitySystemStatics::GetPlayerStateFromAbilityActorInfo(const UUWEGameplayAbility* GameplayAbility) {
    return NULL;
}

ASN2PlayerCharacter* USN2AbilitySystemStatics::GetPlayerFromAbilityActorInfo(const UUWEGameplayAbility* GameplayAbility) {
    return NULL;
}

ASN2PlayerController* USN2AbilitySystemStatics::GetPlayerControllerFromAbilityActorInfo(const UUWEGameplayAbility* GameplayAbility) {
    return NULL;
}

UUWELoopingCuesComponent* USN2AbilitySystemStatics::GetLoopingCuesComponentFromAbilityActorInfo(const UUWEGameplayAbility* GameplayAbility) {
    return NULL;
}

UUWEInventoryRouterComponent* USN2AbilitySystemStatics::GetInventoryRouterFromAilityActorInfo(const UUWEGameplayAbility* GameplayAbility) {
    return NULL;
}

UUWEInventoryComponent* USN2AbilitySystemStatics::GetInventoryFromAbilityActorInfo(const UUWEGameplayAbility* GameplayAbility) {
    return NULL;
}

UUWEEquipmentComponent* USN2AbilitySystemStatics::GetEquipmentFromAbilityActorInfo(const UUWEGameplayAbility* GameplayAbility) {
    return NULL;
}

FGameplayTagContainer USN2AbilitySystemStatics::GetCosmeticTagsFromAbilityActorInfo(const UUWEGameplayAbility* GameplayAbility) {
    return FGameplayTagContainer{};
}

ASN2BaseCharacter* USN2AbilitySystemStatics::GetCharacterFromAbilityActorInfo(const UUWEGameplayAbility* GameplayAbility) {
    return NULL;
}


