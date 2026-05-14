#include "SN2BaseScannerStationViewModel.h"

USN2BaseScannerStationViewModel::USN2BaseScannerStationViewModel() {
    this->ScannerRadiusMeters = 0;
    this->bHasPower = false;
    this->ActiveFilter = NULL;
    this->InteractionComponent = NULL;
    this->ScannerStation = NULL;
}

void USN2BaseScannerStationViewModel::Teardown() {
}

void USN2BaseScannerStationViewModel::Setup(ASN2BaseScannerStation* NewScannerStation, USN2BaseScannerInteractionComponent* NewInteractionComponent) {
}

void USN2BaseScannerStationViewModel::SetActiveFilter(USN2BaseScannerStationFilterViewModel* Filter) {
}

void USN2BaseScannerStationViewModel::OnPowerStateChanged(bool bIsPowered) {
}

void USN2BaseScannerStationViewModel::OnAllowedFiltersChanged(const TArray<USN2BaseScannerStationFilterDataAsset*>& NewAllowedFilters) {
}

void USN2BaseScannerStationViewModel::OnActiveFilterChanged(USN2BaseScannerStationFilterDataAsset* NewActiveFilter) {
}


