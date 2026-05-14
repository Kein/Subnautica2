#include "UWEAIActionComponent.h"

UUWEAIActionComponent::UUWEAIActionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AIOwner = NULL;
}

void UUWEAIActionComponent::OnGameplayTagRemove(const FGameplayTag InTag, int32 NewCount) {
}


