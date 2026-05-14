#include "SN2PingSystemViewModel.h"

USN2PingSystemViewModel::USN2PingSystemViewModel() {
    this->PingSystemComponent = NULL;
}

void USN2PingSystemViewModel::OnPingsChanged() {
}

void USN2PingSystemViewModel::Initialize(UObject* WorldContext) {
}

USN2PingViewModel* USN2PingSystemViewModel::Find(FGuid UniqueID) {
    return NULL;
}


