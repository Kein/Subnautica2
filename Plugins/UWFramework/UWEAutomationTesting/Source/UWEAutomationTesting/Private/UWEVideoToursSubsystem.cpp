#include "UWEVideoToursSubsystem.h"

UUWEVideoToursSubsystem::UUWEVideoToursSubsystem() {
    this->UWEWaitPeriodAfterStreamingSecs = 5.00f;
    this->UWEStreamingTimeoutSecs = 60.00f;
    this->DefaultConsoleCommandsBefore.AddDefaulted(3);
    this->bProfiler = false;
    this->DefaultConsoleCommandsAfter.AddDefaulted(3);
    this->VideoTourSamplingRate = 10.00f;
    this->OutlierValuesTolerance = 2.00f;
}

bool UUWEVideoToursSubsystem::Stop() {
    return false;
}

bool UUWEVideoToursSubsystem::SaveVideoToursTest(const FString& Path, const FUWEVideoToursTest& VideoToursTest) {
    return false;
}

bool UUWEVideoToursSubsystem::SaveVideoTour(const FString& Path, const FUWEVideoTour& VideoTour) {
    return false;
}

bool UUWEVideoToursSubsystem::RunTestJson(const FString& Filename) {
    return false;
}

bool UUWEVideoToursSubsystem::RunTest(const FUWEVideoToursTest& Config) {
    return false;
}

bool UUWEVideoToursSubsystem::Record(FName Filename) {
    return false;
}

bool UUWEVideoToursSubsystem::PlayFromJson(const FString& JsonFilename, bool bSaveResults, const bool bUploadResults) {
    return false;
}

bool UUWEVideoToursSubsystem::Play(bool bSaveResults, bool bUploadResults) {
    return false;
}

bool UUWEVideoToursSubsystem::LoadVideoToursTest(const FString& Path, FUWEVideoToursTest& Output) {
    return false;
}

bool UUWEVideoToursSubsystem::LoadVideoTour(const FString& Path, FUWEVideoTour& Output) {
    return false;
}

FString UUWEVideoToursSubsystem::GetVideoToursUserFolder() {
    return TEXT("");
}

FString UUWEVideoToursSubsystem::GetVideoToursContentFolder() {
    return TEXT("");
}

EUWEVideoToursSubsystemState UUWEVideoToursSubsystem::GetState() const {
    return EUWEVideoToursSubsystemState::Idle;
}

UUWEVideoToursSubsystem* UUWEVideoToursSubsystem::Get(const UWorld* InWorld) {
    return NULL;
}

bool UUWEVideoToursSubsystem::CanStop() const {
    return false;
}

bool UUWEVideoToursSubsystem::CanRecord() const {
    return false;
}

bool UUWEVideoToursSubsystem::CanPlay() const {
    return false;
}


