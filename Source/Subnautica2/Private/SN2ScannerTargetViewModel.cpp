#include "SN2ScannerTargetViewModel.h"

USN2ScannerTargetViewModel::USN2ScannerTargetViewModel() {
    this->ScanAmount = 0.00f;
    this->NumScanned = 0;
    this->NumRequired = 0;
    this->TargetHasBeenScannedBefore = false;
    this->ScanFullyComplete = false;
    this->ScanCompleteForPlayer = false;
    this->bHasValidScanTarget = false;
    this->bScanTargetTooFar = false;
    this->ScanDataFullyScanned = false;
    this->ScanTargetActor = NULL;
    this->WorldContextObject = NULL;
    this->ScannerComp = NULL;
}

void USN2ScannerTargetViewModel::ReCheckHoverTargetDistance() {
}

void USN2ScannerTargetViewModel::OnScanProgressChanged(AActor* ScannedActor, float Progress) {
}

void USN2ScannerTargetViewModel::OnScannableScanned(UUWEScanData* ScanData, int32 GlobalProgress) {
}

void USN2ScannerTargetViewModel::OnLocalClientReady() {
}

void USN2ScannerTargetViewModel::OnHoverTargetChanged(FUWETargetActor OldHoverTarget, FUWETargetActor NewHoverTarget) {
}

void USN2ScannerTargetViewModel::OnEquipmentChanged(AUWEBaseItem* OldTool, AUWEBaseItem* NewTool, bool bIsFirstTimeEquipped) {
}

void USN2ScannerTargetViewModel::Initialize(UObject* WorldContext) {
}


