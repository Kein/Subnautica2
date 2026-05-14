#include "MercunaGroundMoveToProxy.h"

UMercunaGroundMoveToProxy::UMercunaGroundMoveToProxy() {
    this->Pawn = NULL;
}

void UMercunaGroundMoveToProxy::OnMoveComplete(FAIRequestID RequestID, TEnumAsByte<EMercunaMoveResult::Type> Result) {
}

UMercunaGroundMoveToProxy* UMercunaGroundMoveToProxy::MoveToLocations(UObject* WorldContextObject, APawn* NewPawn, const TArray<FVector>& Destinations, float EndDistance, float Speed, bool UsePartialPath, FVector EndDirection) {
    return NULL;
}

UMercunaGroundMoveToProxy* UMercunaGroundMoveToProxy::MoveToLocation(UObject* WorldContextObject, APawn* NewPawn, const FVector& Destination, float EndDistance, float Speed, bool UsePartialPath, FVector EndDirection) {
    return NULL;
}

UMercunaGroundMoveToProxy* UMercunaGroundMoveToProxy::MoveToActor(UObject* WorldContextObject, APawn* NewPawn, AActor* Actor, float EndDistance, float Speed, bool UsePartialPath) {
    return NULL;
}


