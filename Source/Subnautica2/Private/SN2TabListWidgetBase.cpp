#include "SN2TabListWidgetBase.h"

USN2TabListWidgetBase::USN2TabListWidgetBase() {
}

void USN2TabListWidgetBase::SetTabHiddenState(FName TabNameID, bool bHidden) {
}

bool USN2TabListWidgetBase::RegisterDynamicTab(const FSN2TabDescriptor& TabDescriptor) {
    return false;
}

bool USN2TabListWidgetBase::IsTabVisible(FName TabId) {
    return false;
}

bool USN2TabListWidgetBase::IsLastTabActive() const {
    return false;
}

bool USN2TabListWidgetBase::IsFirstTabActive() const {
    return false;
}

int32 USN2TabListWidgetBase::GetVisibleTabCount() {
    return 0;
}

bool USN2TabListWidgetBase::GetPreregisteredTabInfo(const FName TabNameID, FSN2TabDescriptor& OutTabInfo) {
    return false;
}


