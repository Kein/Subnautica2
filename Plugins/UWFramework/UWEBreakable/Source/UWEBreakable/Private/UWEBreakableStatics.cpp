#include "UWEBreakableStatics.h"

UUWEBreakableStatics::UUWEBreakableStatics() {
}

bool UUWEBreakableStatics::IsBreakingDisabled(AActor* FromActor, AActor* BreakableActor, const FHitResult& HitResult) {
    return false;
}

bool UUWEBreakableStatics::BreakBreakableNoAbility(AActor* Instigator, AActor* BreakableActor) {
    return false;
}

bool UUWEBreakableStatics::BreakBreakable(UGameplayAbility* GameplayAbility, AActor* BreakableActor) {
    return false;
}


