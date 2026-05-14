#include "UWEBTTAttachmentSlotOperation.h"

UUWEBTTAttachmentSlotOperation::UUWEBTTAttachmentSlotOperation() {
    this->NodeName = TEXT("Attachment Slot Operation");
    this->OperationType = EUWEBTTAttachmentSlotOperation_Type::None;
    this->UsePawnAttachmentData = true;
    this->DetachmentSource = EUWEBTTAttachmentSlotOperation_DetachmentSource::None;
    this->SucceedIfOperationIsAlreadyDone = false;
    this->FastForward = false;
}


