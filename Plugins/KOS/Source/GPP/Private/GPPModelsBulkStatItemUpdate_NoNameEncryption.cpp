#include "GPPModelsBulkStatItemUpdate_NoNameEncryption.h"

FGPPModelsBulkStatItemUpdate_NoNameEncryption::FGPPModelsBulkStatItemUpdate_NoNameEncryption() {
    this->updateStrategy = EGPPStatisticsUpdateStrategy_NoNameEncryption::OVERRIDE;
    this->Value = 0.00f;
}

