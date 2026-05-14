#include "UWESaveGameSubsystem.h"

UUWESaveGameSubsystem::UUWESaveGameSubsystem() {
}

bool UUWESaveGameSubsystem::IsCurrentSaveDirty() const {
    return false;
}

bool UUWESaveGameSubsystem::GetSaveInfoForSlot(const FString& SlotName, FUWESaveSlotMetaData& OutSaveGameInfo) {
    return false;
}

FDateTime UUWESaveGameSubsystem::GetLastSaveToDiscTimeStamp() {
    return FDateTime{};
}

FString UUWESaveGameSubsystem::GetLastModifiedSaveForLevel(const FString& LevelName) const {
    return TEXT("");
}

TArray<FUWESaveGameCollectionInfo> UUWESaveGameSubsystem::GetAllSaveInfoForLevel(const FString& LevelName) const {
    return TArray<FUWESaveGameCollectionInfo>();
}


