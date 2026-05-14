#include "USN2PlayerCustomizationViewModel.h"

UUSN2PlayerCustomizationViewModel::UUSN2PlayerCustomizationViewModel() {
}

TMap<EUWEPlayerCustomizationPartType, FSN2CustomizationItemViewModelArray> UUSN2PlayerCustomizationViewModel::GetEquippableCustomizationItemsForCharacter() {
    return TMap<EUWEPlayerCustomizationPartType, FSN2CustomizationItemViewModelArray>();
}

USN2CustomizationItemViewModel* UUSN2PlayerCustomizationViewModel::GetCurrentlySelectedPart(EUWEPlayerCustomizationPartType PartType) {
    return NULL;
}

void UUSN2PlayerCustomizationViewModel::ConfirmCustomization() {
}

void UUSN2PlayerCustomizationViewModel::ClearCustomization() {
}

void UUSN2PlayerCustomizationViewModel::ApplyCustomizationItem(UUWEPlayerCustomizationItemDA* Item) {
}

void UUSN2PlayerCustomizationViewModel::Activate() {
}


