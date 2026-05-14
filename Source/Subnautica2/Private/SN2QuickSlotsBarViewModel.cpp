#include "SN2QuickSlotsBarViewModel.h"

USN2QuickSlotsBarViewModel::USN2QuickSlotsBarViewModel() {
    this->WorldContextObject = NULL;
    this->HasReasonToHide = false;
    this->ShowReload = false;
    this->ShowNoBatteries = false;
    this->SelectQuickslotModeActive = false;
    this->SelectedQuickslot = -1;
}

void USN2QuickSlotsBarViewModel::TrySelectFirstFreeQuickslot() {
}

void USN2QuickSlotsBarViewModel::SelectPreviousQuickslot() {
}

void USN2QuickSlotsBarViewModel::SelectNextQuickslot() {
}

void USN2QuickSlotsBarViewModel::RemoveReasonToHide(const FString& Reason) {
}

void USN2QuickSlotsBarViewModel::OnQuickSlotChanged() {
}

void USN2QuickSlotsBarViewModel::OnPossessedPawnChanged(APawn* OldPawn, APawn* NewPawn) {
}

void USN2QuickSlotsBarViewModel::OnEnergyChanged(AActor* Who) {
}

void USN2QuickSlotsBarViewModel::ClearSelectedQuickslot() {
}

void USN2QuickSlotsBarViewModel::ClearQuickslotSelection() {
}

void USN2QuickSlotsBarViewModel::AddReasonToHide(const FString& Reason) {
}


