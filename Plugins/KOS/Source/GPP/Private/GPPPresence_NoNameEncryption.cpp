#include "GPPPresence_NoNameEncryption.h"

FGPPPresence_NoNameEncryption::FGPPPresence_NoNameEncryption() {
    this->LastLoginAt = 0;
    this->Status = EGPPUserStatus_NoNameEncryption::Online;
}

