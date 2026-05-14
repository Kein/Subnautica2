#include "MercunaSurfaceTask_MoveTo.h"

UMercunaSurfaceTask_MoveTo::UMercunaSurfaceTask_MoveTo() : UAITask(FObjectInitializer::Get()) {
}

void UMercunaSurfaceTask_MoveTo::OnMoveComplete(FAIRequestID RequestID, TEnumAsByte<EMercunaMoveResult::Type> Result) {
}

UMercunaSurfaceTask_MoveTo* UMercunaSurfaceTask_MoveTo::MoveTo(AAIController* Controller, FVector GoalLocation, AActor* GoalActor, float EndDistance, bool AcceptPartialPath, bool bLockAILogic) {
    return NULL;
}


