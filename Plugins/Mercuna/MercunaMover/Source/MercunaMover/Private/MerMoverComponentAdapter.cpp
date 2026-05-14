#include "MerMoverComponentAdapter.h"

UMerMoverComponentAdapter::UMerMoverComponentAdapter() {
    this->MoverComponent = NULL;
    this->NavigationComponent = NULL;
    this->CurrentMoverProducer = NULL;
}

void UMerMoverComponentAdapter::OnPreSimTick(const FMoverTimeStep& TimeStep, const FMoverInputCmdContext& InputCmd) {
}

void UMerMoverComponentAdapter::OnMovementModeChanged(const FName& PreviousMovementModeName, const FName& NewMovementModeName) {
}


