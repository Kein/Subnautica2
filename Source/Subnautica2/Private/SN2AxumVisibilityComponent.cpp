#include "SN2AxumVisibilityComponent.h"

USN2AxumVisibilityComponent::USN2AxumVisibilityComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HideActorOnLayerToggle = true;
    this->IsLayerOn = false;
}

void USN2AxumVisibilityComponent::OnTagChanged(FGameplayTag GameplayTag, int32 I) {
}

bool USN2AxumVisibilityComponent::IsOn() const {
    return false;
}


