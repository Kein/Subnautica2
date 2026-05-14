#include "SN2WarningsActiveViewModel.h"

USN2WarningsActiveViewModel::USN2WarningsActiveViewModel() {
    this->WorldContextObject = NULL;
    this->WarningsActive = false;
}

void USN2WarningsActiveViewModel::OnWarningBlockingTagChanged(FGameplayTag GameplayTag, int32 NewCount) {
}

void USN2WarningsActiveViewModel::OnLocalClientReady() {
}


