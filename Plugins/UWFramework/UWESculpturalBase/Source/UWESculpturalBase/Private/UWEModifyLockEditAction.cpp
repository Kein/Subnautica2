#include "UWEModifyLockEditAction.h"

UUWEModifyLockEditAction::UUWEModifyLockEditAction() {
    this->LockID = -1;
    this->ChangeLockFlags = false;
    this->Flags = 0;
    this->ChangeInventory = false;
    this->NewInventoryID = -1;
    this->ChangeLockedCells = false;
}

UUWEModifyLockEditAction* UUWEModifyLockEditAction::Create(AUWESculpturalBaseActor* base, int32 NewLockID, uint8 NewFlags, bool NewChangeLockFlags, bool NewChangeLockedCells, bool NewChangeInventory, int32 NewNewInventoryID) {
    return NULL;
}


