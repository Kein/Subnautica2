#include "MercunaGroundTrackActorProxy.h"

UMercunaGroundTrackActorProxy::UMercunaGroundTrackActorProxy() {
    this->Pawn = NULL;
}

UMercunaGroundTrackActorProxy* UMercunaGroundTrackActorProxy::TrackActor(UObject* WorldContextObject, APawn* NewPawn, AActor* Actor, float Distance, float Speed, FVector Offset, bool UsePartialPath) {
    return NULL;
}

void UMercunaGroundTrackActorProxy::OnMoveComplete(FAIRequestID RequestID, TEnumAsByte<EMercunaMoveResult::Type> Result) {
}


