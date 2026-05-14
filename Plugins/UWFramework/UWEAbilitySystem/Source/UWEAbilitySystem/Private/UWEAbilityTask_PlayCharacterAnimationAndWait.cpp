#include "UWEAbilityTask_PlayCharacterAnimationAndWait.h"
#include "Net/UnrealNetwork.h"

UUWEAbilityTask_PlayCharacterAnimationAndWait::UUWEAbilityTask_PlayCharacterAnimationAndWait() {
}

UUWEAbilityTask_PlayCharacterAnimationAndWait* UUWEAbilityTask_PlayCharacterAnimationAndWait::PlayCharacterAnimationAndWait(UGameplayAbility* OwningAbility, FName TaskInstanceName, FGameplayTag NewAnimationTag, float MaxDuration) {
    return NULL;
}

void UUWEAbilityTask_PlayCharacterAnimationAndWait::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UUWEAbilityTask_PlayCharacterAnimationAndWait, AnimationTag);
}


