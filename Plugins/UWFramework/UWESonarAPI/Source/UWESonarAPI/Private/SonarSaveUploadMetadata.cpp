#include "SonarSaveUploadMetadata.h"

FSonarSaveUploadMetadata::FSonarSaveUploadMetadata() {
    this->IsMultiplayerSave = false;
    this->SaveGameSize = 0;
    this->BuildNumber = 0;
    this->Version = 0;
    this->MajorVersion = 0;
    this->ComparisonHash = 0;
    this->bWasMultiplayerSave = false;
    this->bWasImported = false;
}

