#include "UWEStimulusSystemStatics.h"
#include "Templates/SubclassOf.h"

UUWEStimulusSystemStatics::UUWEStimulusSystemStatics() {
}

FActiveGameplayEffectHandle UUWEStimulusSystemStatics::ApplyStimulusEffect(const AActor* Target, FGameplayTagContainer StimulusTags, TSubclassOf<UGameplayEffect> BaseEffec) {
    return FActiveGameplayEffectHandle{};
}


