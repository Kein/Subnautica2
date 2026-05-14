#include "UWESmoketestComp.h"

UUWESmoketestComp::UUWESmoketestComp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UUWESmoketestComp::ServerMessage_Implementation(const FString& Msg) {
}

void UUWESmoketestComp::ServerExit_Implementation() {
}

void UUWESmoketestComp::ServerCheckServerLogMaxOccurrences_Implementation(int32 MaxOccurrences, const FString& SearchString) {
}

void UUWESmoketestComp::ServerCheckServerLogIncludes_Implementation(const FString& SearchString, bool bExcludes) {
}

void UUWESmoketestComp::ServerCheckConnected_Implementation() {
}

void UUWESmoketestComp::ServerCheckBuildNumber_Implementation(int32 ClientBuildNumber) {
}

UUWESmoketestSubsystem* UUWESmoketestComp::GetSubsystem() {
    return NULL;
}

void UUWESmoketestComp::DoServerExit() {
}

void UUWESmoketestComp::ClientCheckServerLogMaxOccurrencesResponse_Implementation(bool bSuccess, int32 MaxOccurrences, int32 FoundOccurrences, const FString& SearchString, const TArray<FString>& FoundLines) {
}

void UUWESmoketestComp::ClientCheckServerLogIncludesResponse_Implementation(bool bSuccess, const FString& SearchString, bool bExcludes) {
}

void UUWESmoketestComp::ClientCheckConnectedResponse_Implementation() {
}

void UUWESmoketestComp::ClientCheckBuildNumberResponse_Implementation(bool bSuccess, int32 ServerBuildNumber) {
}


