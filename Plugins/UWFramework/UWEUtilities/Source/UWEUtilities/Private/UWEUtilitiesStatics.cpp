#include "UWEUtilitiesStatics.h"

UUWEUtilitiesStatics::UUWEUtilitiesStatics() {
}

FText UUWEUtilitiesStatics::GetTextFromGameplayTag(const FGameplayTag& Tag) {
    return FText::GetEmpty();
}

UWorld* UUWEUtilitiesStatics::GetMainPlayWorld() {
    return NULL;
}

void UUWEUtilitiesStatics::FlushNetDormancyIfNecessary(AActor* Actor) {
}


