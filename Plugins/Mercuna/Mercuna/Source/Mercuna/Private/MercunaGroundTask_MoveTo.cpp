#include "MercunaGroundTask_MoveTo.h"

UMercunaGroundTask_MoveTo::UMercunaGroundTask_MoveTo() : UAITask(FObjectInitializer::Get()) {
}

void UMercunaGroundTask_MoveTo::OnMoveComplete(FAIRequestID RequestID, TEnumAsByte<EMercunaMoveResult::Type> Result) {
}

UMercunaGroundTask_MoveTo* UMercunaGroundTask_MoveTo::MoveTo(AAIController* Controller, FVector GoalLocation, AActor* GoalActor, float EndDistance, bool AcceptPartialPath, bool bLockAILogic) {
    return NULL;
}


