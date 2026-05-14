#include "UWELockCellsEditAction.h"

UUWELockCellsEditAction::UUWELockCellsEditAction() {
    this->LockID = -1;
    this->Flags = 0;
    this->AssociatedInventoryID = -1;
}

UUWELockCellsEditAction* UUWELockCellsEditAction::Create(AUWESculpturalBaseActor* base, int32 NewLockID, FGuid NewLockOwner, uint8 NewFlags, int32 NewAssociatedInventoryID) {
    return NULL;
}


