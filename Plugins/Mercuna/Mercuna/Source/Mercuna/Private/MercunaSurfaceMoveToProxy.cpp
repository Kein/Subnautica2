#include "MercunaSurfaceMoveToProxy.h"

UMercunaSurfaceMoveToProxy::UMercunaSurfaceMoveToProxy() {
    this->Pawn = NULL;
}

void UMercunaSurfaceMoveToProxy::OnMoveComplete(FAIRequestID RequestID, TEnumAsByte<EMercunaMoveResult::Type> Result) {
}

UMercunaSurfaceMoveToProxy* UMercunaSurfaceMoveToProxy::MoveToLocations(UObject* WorldContextObject, APawn* NewPawn, const TArray<FVector>& Destinations, float EndDistance, float Speed, bool UsePartialPath, FVector EndDirection) {
    return NULL;
}

UMercunaSurfaceMoveToProxy* UMercunaSurfaceMoveToProxy::MoveToLocation(UObject* WorldContextObject, APawn* NewPawn, const FVector& Destination, float EndDistance, float Speed, bool UsePartialPath, FVector EndDirection) {
    return NULL;
}

UMercunaSurfaceMoveToProxy* UMercunaSurfaceMoveToProxy::MoveToActor(UObject* WorldContextObject, APawn* NewPawn, AActor* Actor, float EndDistance, float Speed, bool UsePartialPath, bool UseEndActorOrientation) {
    return NULL;
}


