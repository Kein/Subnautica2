#include "SN2AttributeBarComponent.h"

USN2AttributeBarComponent::USN2AttributeBarComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VisibilityCondition = ESN2BarVisibilityCondition::RecentlyChanged;
    this->DisappearDelay = 1.00f;
    this->ThresholdPercent = 0.50f;
    this->bHideWhenLocallyControlled = true;
}

void USN2AttributeBarComponent::OnPossessedChanged(bool bNewPossessed) {
}


