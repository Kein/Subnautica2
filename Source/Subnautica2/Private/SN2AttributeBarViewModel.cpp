#include "SN2AttributeBarViewModel.h"

USN2AttributeBarViewModel::USN2AttributeBarViewModel() {
    this->Value = 0.00f;
    this->MaxValue = 0.00f;
}

void USN2AttributeBarViewModel::OnOwnerDestroyed(AActor* DestroyedActor) {
}

bool USN2AttributeBarViewModel::IsVisible() const {
    return false;
}

float USN2AttributeBarViewModel::GetValuePercent() const {
    return 0.0f;
}

float USN2AttributeBarViewModel::GetDistance() const {
    return 0.0f;
}


