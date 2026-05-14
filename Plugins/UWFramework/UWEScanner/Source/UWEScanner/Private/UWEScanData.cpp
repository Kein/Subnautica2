#include "UWEScanData.h"

UUWEScanData::UUWEScanData() {
    this->ScanDuration = 3.00f;
    this->NumRequired = 1;
    this->bPinnablePartialScanProgress = false;
    this->ProgressSharedOverride = ESharedScanProgressOverrides::UseDefaults;
    this->bShowNameWhenHovered = true;
    this->ScanObjectType = EScanObjectType::Organic;
}

UUWEScanData* UUWEScanData::GetScanDataForComponent(UActorComponent* ActorComponent) {
    return NULL;
}

UUWEScanData* UUWEScanData::GetScanDataForActor(const AActor* Actor) {
    return NULL;
}


