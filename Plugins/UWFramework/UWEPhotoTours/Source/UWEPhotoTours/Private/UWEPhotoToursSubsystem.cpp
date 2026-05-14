#include "UWEPhotoToursSubsystem.h"

UUWEPhotoToursSubsystem::UUWEPhotoToursSubsystem() {
    this->CurrentLevelIndex = -1;
    this->bRunOnAllLevels = false;
    this->bIsPhotoTourRunning = false;
    this->OriginalCamera = NULL;
    this->PlayerController = NULL;
    this->StreamingTimeoutSecs = 60.00f;
    this->UWEMaxCameras = 1000;
    this->UWEWaitPeriodAfterStreamingSecs = 1.00f;
    this->bEnableCSV = 1;
    this->bEnableStatsUI = 1;
    this->bSetVideoMode = true;
}

bool UUWEPhotoToursSubsystem::StartPhotoToursOnAllLevels(FPhotoTourConfig Config) {
    return false;
}

bool UUWEPhotoToursSubsystem::StartPhotoTourOnCurrentLevel() {
    return false;
}

TArray<FString> UUWEPhotoToursSubsystem::GetPhotoToursLevels(const FString& MapGroup) {
    return TArray<FString>();
}

bool UUWEPhotoToursSubsystem::GetIsPhotoTourRunning() const {
    return false;
}

FString UUWEPhotoToursSubsystem::GetDefaultPhotoToursFolder() {
    return TEXT("");
}

UUWEPhotoToursSubsystem* UUWEPhotoToursSubsystem::Get(const UWorld* InWorld) {
    return NULL;
}

bool UUWEPhotoToursSubsystem::CanStartPhotoTour() const {
    return false;
}


