#include "UWETransferLockedCellsOwnerEditAction.h"

UUWETransferLockedCellsOwnerEditAction::UUWETransferLockedCellsOwnerEditAction() {
    this->LockID = -1;
    this->ShouldBeHardLock = false;
    this->AssociatedInventoryID = -1;
}

UUWETransferLockedCellsOwnerEditAction* UUWETransferLockedCellsOwnerEditAction::Create(AUWESculpturalBaseActor* base, int32 NewLockID, FGuid NewNewOwner, bool NewShouldBeHardLock, int32 NewAssociatedInventoryID) {
    return NULL;
}


