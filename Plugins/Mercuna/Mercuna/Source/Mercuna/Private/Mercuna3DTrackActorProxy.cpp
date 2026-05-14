#include "Mercuna3DTrackActorProxy.h"

UMercuna3DTrackActorProxy::UMercuna3DTrackActorProxy() {
    this->Pawn = NULL;
}

UMercuna3DTrackActorProxy* UMercuna3DTrackActorProxy::TrackActor(UObject* WorldContextObject, APawn* NewPawn, AActor* Actor, float Distance, float Speed, FVector Offset) {
    return NULL;
}

void UMercuna3DTrackActorProxy::OnMoveComplete(FAIRequestID RequestID, TEnumAsByte<EMercunaMoveResult::Type> Result) {
}


