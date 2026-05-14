#include "Mercuna3DMoveToProxy.h"

UMercuna3DMoveToProxy::UMercuna3DMoveToProxy() {
    this->Pawn = NULL;
}

void UMercuna3DMoveToProxy::OnMoveComplete(FAIRequestID RequestID, TEnumAsByte<EMercunaMoveResult::Type> Result) {
}

UMercuna3DMoveToProxy* UMercuna3DMoveToProxy::MoveToLocations(UObject* WorldContextObject, APawn* NewPawn, const TArray<FVector>& Destinations, float EndDistance, float Speed, bool UsePartialPath) {
    return NULL;
}

UMercuna3DMoveToProxy* UMercuna3DMoveToProxy::MoveToLocation(UObject* WorldContextObject, APawn* NewPawn, const FVector& Destination, float EndDistance, float Speed, bool UsePartialPath) {
    return NULL;
}

UMercuna3DMoveToProxy* UMercuna3DMoveToProxy::MoveToActor(UObject* WorldContextObject, APawn* NewPawn, AActor* Actor, float EndDistance, float Speed, bool UsePartialPath) {
    return NULL;
}


