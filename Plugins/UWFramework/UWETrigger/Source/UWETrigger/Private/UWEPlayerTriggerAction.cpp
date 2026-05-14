#include "UWEPlayerTriggerAction.h"

UUWEPlayerTriggerAction::UUWEPlayerTriggerAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Delay = 0.00f;
    this->BypassConditionActions = false;
    this->ReactsTo = FUWETriggerOverlapType::OnEnter;
    this->SaveHandle = NULL;
}

void UUWEPlayerTriggerAction::HandlePlayerJoined(APlayerController* PlayerController) {
}


