#include "SN2PdaViewModel.h"
#include "Templates/SubclassOf.h"

USN2PdaViewModel::USN2PdaViewModel() {
    this->IsActive = false;
    this->IsModifierHeld = false;
    this->InventoryScreen = NULL;
    this->InventoryComponent = NULL;
    this->EquipmentComponent = NULL;
    this->ToolbarComponent = NULL;
    this->NotificationComponent = NULL;
    this->DistanceTask = NULL;
    this->Widget = NULL;
    this->CurrentInventoryInteractionComponent = NULL;
}

USN2PdaViewModel* USN2PdaViewModel::TryGetPDAViewModel(UObject* WorldContext) {
    return NULL;
}

void USN2PdaViewModel::ShowPDA() {
}

void USN2PdaViewModel::SetIsModifierHeld(bool NewState) {
}

void USN2PdaViewModel::SetIsActive(bool NewState) {
}

void USN2PdaViewModel::OnWidgetPopped(TEnumAsByte<EUWEWindowManagerLayer> LayerId, bool bIsLast, TSubclassOf<UCommonActivatableWidget> Class) {
}

void USN2PdaViewModel::OnNotificationStarted(const FNotificationData& NotificationData) {
}

void USN2PdaViewModel::HidePDA() {
}


