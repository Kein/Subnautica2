#include "UWEBTDFindSmartObject.h"

UUWEBTDFindSmartObject::UUWEBTDFindSmartObject() {
    this->NodeName = TEXT("Find Smart Object");
    this->FlowAbortMode = EBTFlowAbortMode::Self;
    this->UseSightRadius = true;
    this->QueryBoxHalfExtent = 1000.00f;
    this->TrackMovingSmartObjectSlotLocation = false;
    this->SelectClosestSlot = true;
    this->DoVisibilityTest = true;
    this->VisibilityTraceChannel = ECC_Visibility;
    this->DoDotAngleTest_DecisionTargetVSSmartObject = false;
}


