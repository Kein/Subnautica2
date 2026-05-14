#include "LegalAgreement_NoNameEncryption.h"

FLegalAgreement_NoNameEncryption::FLegalAgreement_NoNameEncryption() {
    this->ShouldNotifyOnUpdate = false;
    this->IsMandatory = false;
    this->IsAccepted = false;
    this->IsDefaultOpted = false;
    this->IsDefaultSelection = false;
    this->PushNotificationIntegration = EPushNotificationIntegrationType_NoNameEncryption::NONE;
}

