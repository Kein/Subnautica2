#include "GPPLastLoggedInfoModel_NoNameEncryption.h"

FGPPLastLoggedInfoModel_NoNameEncryption::FGPPLastLoggedInfoModel_NoNameEncryption() {
    this->PlatformLoginType = EGPPlatformLoginType::None;
    this->ExpiredRefreshTokenUnixTime = 0;
    this->SaveTimestamp = 0;
}

