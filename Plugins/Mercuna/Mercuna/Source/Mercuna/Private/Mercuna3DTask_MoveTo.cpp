#include "Mercuna3DTask_MoveTo.h"

UMercuna3DTask_MoveTo::UMercuna3DTask_MoveTo() : UAITask(FObjectInitializer::Get()) {
}

void UMercuna3DTask_MoveTo::OnMoveComplete(FAIRequestID RequestID, TEnumAsByte<EMercunaMoveResult::Type> Result) {
}

UMercuna3DTask_MoveTo* UMercuna3DTask_MoveTo::MoveTo(AAIController* Controller, FVector GoalLocation, AActor* GoalActor, float EndDistance, bool AcceptPartialPath, bool bLockAILogic) {
    return NULL;
}


