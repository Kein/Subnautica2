#include "MercunaSurfaceTrackActorProxy.h"

UMercunaSurfaceTrackActorProxy::UMercunaSurfaceTrackActorProxy() {
    this->Pawn = NULL;
}

UMercunaSurfaceTrackActorProxy* UMercunaSurfaceTrackActorProxy::TrackActor(UObject* WorldContextObject, APawn* NewPawn, AActor* Actor, float Distance, float Speed, FVector Offset, bool UsePartialPath, bool UseEndActorOrientation) {
    return NULL;
}

void UMercunaSurfaceTrackActorProxy::OnMoveComplete(FAIRequestID RequestID, TEnumAsByte<EMercunaMoveResult::Type> Result) {
}


