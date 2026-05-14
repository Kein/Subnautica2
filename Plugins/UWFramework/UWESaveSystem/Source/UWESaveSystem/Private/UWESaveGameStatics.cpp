#include "UWESaveGameStatics.h"

UUWESaveGameStatics::UUWESaveGameStatics() {
}

void UUWESaveGameStatics::UpgradeSaveGameCollectionToLatest(const FUWESaveGameCollectionInfo& Info, FSaveUpgradeCompletedDelegate CompletedDelegate) {
}

void UUWESaveGameStatics::UpdateCustomSaveGameInfo(UUWESaveGameCustomInfoBase* InObject) {
}

void UUWESaveGameStatics::UnblockSavingWithDelegate(FUWESaveBlockingHandle& Handle, FSaveUnblockedDelegate Delegate, bool bShouldTrySaveAfterUnblocking) {
}

void UUWESaveGameStatics::UnblockSaving(FUWESaveBlockingHandle& InHandle, bool bShouldTrySaveAfterUnblocking) {
}

void UUWESaveGameStatics::SetAutoSaveEnabled(bool InValue) {
}

bool UUWESaveGameStatics::RegisterCustomSaveGameInfo(UUWESaveGameCustomInfoBase* InObject) {
    return false;
}

void UUWESaveGameStatics::OpenSavesFolder() {
}

bool UUWESaveGameStatics::IsSavingBlocked() {
    return false;
}

bool UUWESaveGameStatics::IsSaveSystemInitialized() {
    return false;
}

bool UUWESaveGameStatics::IsAutoSaveEnabledForTests() {
    return false;
}

bool UUWESaveGameStatics::IsAutoSaveEnabled() {
    return false;
}

int32 UUWESaveGameStatics::GetMaxSaveSlots() {
    return 0;
}

FString UUWESaveGameStatics::GetDisplayNameForSlot(const FString& InSlotName, EUWESaveSlotFilter Match) {
    return TEXT("");
}

FString UUWESaveGameStatics::GetCheckpointIndexAsString(const EUWESaveGameCollectionIndex Index) {
    return TEXT("");
}

void UUWESaveGameStatics::GetAllExistingSaveGames(TArray<FString>& SaveGames, const int32 UserIndex) {
}

void UUWESaveGameStatics::EnableAutoSaveForTests(bool InValue) {
}

bool UUWESaveGameStatics::DataExistsForSaveHandle(const UUWESaveHandle* Handle) {
    return false;
}

void UUWESaveGameStatics::CalculateDisplayBytes(int64 NumBytes, float& OutBytes, FString& OutAbbrev) {
}

FUWESaveBlockingHandle UUWESaveGameStatics::BlockSaving(bool bShouldTrySaveBeforeBlocking) {
    return FUWESaveBlockingHandle{};
}

UUWESaveComponent* UUWESaveGameStatics::AddSaveComponent(AActor* Target, bool bCheckAlreadyAdded) {
    return NULL;
}


