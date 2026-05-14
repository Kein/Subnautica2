#include "SN2ProximityTextPopup.h"

USN2ProximityTextPopup::USN2ProximityTextPopup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void USN2ProximityTextPopup::TogglePopupActive(bool NewValue) {
}

bool USN2ProximityTextPopup::IsMissingGlyphs() const {
    return false;
}

bool USN2ProximityTextPopup::HasRequiredGlyphs() const {
    return false;
}

FText USN2ProximityTextPopup::GetPopupText(const AActor* Instigator) const {
    return FText::GetEmpty();
}


