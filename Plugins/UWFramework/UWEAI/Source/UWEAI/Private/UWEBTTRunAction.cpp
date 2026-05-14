#include "UWEBTTRunAction.h"

UUWEBTTRunAction::UUWEBTTRunAction() {
    this->NodeName = TEXT("Run Action");
    this->ActionData = NULL;
}

void UUWEBTTRunAction::OnActionFinished(const AActor* Owner, bool bWasSuccess) {
}


