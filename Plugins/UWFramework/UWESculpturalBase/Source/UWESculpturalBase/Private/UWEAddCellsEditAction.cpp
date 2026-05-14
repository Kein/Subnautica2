#include "UWEAddCellsEditAction.h"

UUWEAddCellsEditAction::UUWEAddCellsEditAction() {
}

EUWEEditActionLegality UUWEAddCellsEditAction::GetLegality(bool IgnoreSupportCheck, int32 LockGroupToIgnore, bool IgnoreAllLocks, int32 MaxIterations) {
    return EUWEEditActionLegality::Illegal_NoValidCells;
}

UUWEAddCellsEditAction* UUWEAddCellsEditAction::Create(AUWESculpturalBaseActor* base, FGameplayTag NewBrushType, const FString& AnalyticsActionName) {
    return NULL;
}


