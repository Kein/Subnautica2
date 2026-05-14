#include "SN2BaseScannerStationFilterViewModel.h"

USN2BaseScannerStationFilterViewModel::USN2BaseScannerStationFilterViewModel() {
    this->IsActiveFilter = false;
    this->Filter = NULL;
}

bool USN2BaseScannerStationFilterViewModel::IsSameFilter(const USN2BaseScannerStationFilterViewModel* Other) const {
    return false;
}


