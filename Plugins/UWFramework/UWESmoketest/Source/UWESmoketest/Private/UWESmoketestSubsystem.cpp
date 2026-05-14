#include "UWESmoketestSubsystem.h"

UUWESmoketestSubsystem::UUWESmoketestSubsystem() {
    this->CurrentStep = -1;
    this->UWEDefaultSmoketestFilename = TEXT("smoketest-full.json");
    this->UWEIsEnabled = true;
    this->UWECrashOnFailure = true;
    this->UWEExitOnSuccess = true;
}

void UUWESmoketestSubsystem::StartSmoketest(const FString& Filename) {
}

void UUWESmoketestSubsystem::ServerCheckServerLogMaxOccurrences(APlayerController* PC, int32 MaxOccurrences, const FString& SearchString) {
}

void UUWESmoketestSubsystem::ServerCheckServerLogIncludes(APlayerController* PC, const FString& SearchString, bool bExcludes) {
}

void UUWESmoketestSubsystem::ServerCheckBuildNumber(APlayerController* PC, int32 ClientBuildNumber) {
}

void UUWESmoketestSubsystem::OnGameModePostLogin(AGameModeBase* GameMode, APlayerController* NewPlayer) {
}

int32 UUWESmoketestSubsystem::NumOccurrencesInLogfile(const FString& SearchString, TArray<FString>& FoundLines) {
    return 0;
}

void UUWESmoketestSubsystem::Message(const FString& Text, bool bError, float TimeToDisplay) {
}

bool UUWESmoketestSubsystem::LogFileIncludes(const FString& SearchString, bool bExclude) {
    return false;
}

UUWESmoketestComp* UUWESmoketestSubsystem::GetSmoketestComponent() {
    return NULL;
}

FString UUWESmoketestSubsystem::GetLogFileContents() {
    return TEXT("");
}

UWorld* UUWESmoketestSubsystem::FindWorld() {
    return NULL;
}

void UUWESmoketestSubsystem::FailSmoketest(const FString& Reason) {
}

void UUWESmoketestSubsystem::ExitProcess() {
}

void UUWESmoketestSubsystem::ExecuteStep(FUWESmoketestStep& Step) {
}

void UUWESmoketestSubsystem::DoFailSmoketest() {
}

void UUWESmoketestSubsystem::DoAdvanceStep() {
}

void UUWESmoketestSubsystem::ClientCheckServerLogMaxOccurrencesResponse(bool bSuccess, int32 MaxOccurrences, int32 FoundOccurrences, const FString& SearchString, const TArray<FString>& FoundLines) {
}

void UUWESmoketestSubsystem::ClientCheckServerLogIncludesResponse(bool bSuccess, const FString& SearchString, bool bExcludes) {
}

void UUWESmoketestSubsystem::ClientCheckConnectedResponse() {
}

void UUWESmoketestSubsystem::ClientCheckBuildNumberResponse(bool bSuccess, int32 ServerBuildNumber) {
}

void UUWESmoketestSubsystem::CancelAdvanceStep() {
}

void UUWESmoketestSubsystem::AdvanceStep(int32 NumSeconds) {
}


