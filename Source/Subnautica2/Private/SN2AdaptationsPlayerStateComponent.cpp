#include "SN2AdaptationsPlayerStateComponent.h"

USN2AdaptationsPlayerStateComponent::USN2AdaptationsPlayerStateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void USN2AdaptationsPlayerStateComponent::SetAdaptationEnabled(FUWEPlayerAdaptation Adaptation, bool bEnabled) {
}

void USN2AdaptationsPlayerStateComponent::OnPawnSet(APlayerState* Player, APawn* NewPawn, APawn* OldPawn) {
}

bool USN2AdaptationsPlayerStateComponent::HasAdaptation(FUWEPlayerAdaptation Adaptation) {
    return false;
}

TArray<FUWEPlayerAdaptation> USN2AdaptationsPlayerStateComponent::GetAdaptations() {
    return TArray<FUWEPlayerAdaptation>();
}

void USN2AdaptationsPlayerStateComponent::AdaptationUnlockChanged(FGameplayTag GameplayTag, int32 NewCount) {
}


