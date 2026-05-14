#include "UWEAddInitialPieceEditAction.h"

UUWEAddInitialPieceEditAction::UUWEAddInitialPieceEditAction() {
}

EUWEEditActionLegality UUWEAddInitialPieceEditAction::GetLegality(bool IgnoreSupportCheck, int32 LockGroupToIgnore, bool IgnoreAllLocks, int32 MaxIterations) {
    return EUWEEditActionLegality::Illegal_NoValidCells;
}

UUWEAddInitialPieceEditAction* UUWEAddInitialPieceEditAction::Create(AUWESculpturalBaseActor* base, UUWEBaseInitialPieceData* NewInitialPieceData, const FString& AnalyticsActionName) {
    return NULL;
}


