#include "SN2RadioComponent.h"

USN2RadioComponent::USN2RadioComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OwningPlayerState = NULL;
    this->GameState = NULL;
}

bool USN2RadioComponent::HasRadioMessages() const {
    return false;
}

void USN2RadioComponent::CheckRadioDataList() {
}


