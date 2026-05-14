#include "WEBTDFindAttachmentSlot.h"

UWEBTDFindAttachmentSlot::UWEBTDFindAttachmentSlot() {
    this->NodeName = TEXT("Find Attachment Slot");
    this->FlowAbortMode = EBTFlowAbortMode::Self;
    this->GetAttachmentOwnerFromPerceivedActors = false;
    this->DoVisibilityTest = false;
    this->VisibilityTraceChannel = ECC_Visibility;
    this->AutoDetachByLeavingNode = true;
}


