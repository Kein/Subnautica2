#include "UWESaveSystemSettings.h"

UUWESaveSystemSettings::UUWESaveSystemSettings() {
    this->XboxMaxSaveSlots = 20;
    this->PS5MaxSaveSlots = 30;
    this->PCMaxSaveSlots = 30;
    this->ThumbnailWidth = 256;
    this->ThumbnailHeight = 256;
    this->ScreenShotTimeout = 1.00f;
    this->ThumbnailsEnabled = true;
    this->AutoSaveDurationInSeconds = 30.00f;
    this->FirstAutoSaveDelayInSeconds = 60.00f;
    this->DurationInSecondsToWaitAfterLastSavePromptSaveOnExit = 5;
    this->AutoSaveRecordEventFrequency = 4;
    this->AutoSaveThumbnailFrequency = 4;
    this->SaveBackupPeriodInMinutes = 10.00f;
}

int32 UUWESaveSystemSettings::GetDurationInSecondsToWaitAfterLastSavePromptSaveOnExit() {
    return 0;
}


