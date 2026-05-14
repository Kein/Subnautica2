#include "UWEWorldMarkupLocalSettings.h"

UUWEWorldMarkupLocalSettings::UUWEWorldMarkupLocalSettings() {
    this->DrawDebug = false;
    this->DetectLeaks = false;
    this->ShowModalPopupOnLeak = true;
    this->NumCellsBetweenLeakCheck = 10;
    this->NumCellsToShowAfterLeak = 100;
    this->LeakDetectionDistance = 100000.00f;
}


