#include "UWEBTDInsideHabitationAreaCheck.h"

UUWEBTDInsideHabitationAreaCheck::UUWEBTDInsideHabitationAreaCheck() {
    this->NodeName = TEXT("Inside Habitation Area Check");
    this->FlowAbortMode = EBTFlowAbortMode::Self;
    this->CheckCurrentHabitationArea = true;
}


