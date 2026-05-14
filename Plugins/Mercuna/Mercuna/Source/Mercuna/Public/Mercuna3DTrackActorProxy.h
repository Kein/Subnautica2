#pragma once
#include "CoreMinimal.h"
#include "AITypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "EMercunaMoveResult.h"
#include "MercunaNavigationResultDelegate.h"
#include "Mercuna3DTrackActorProxy.generated.h"

class AActor;
class APawn;
class UMercuna3DTrackActorProxy;
class UObject;

UCLASS(MinimalAPI)
class UMercuna3DTrackActorProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FMercunaNavigationResult OnFailure;
    
private:
    UPROPERTY(Transient)
    APawn* Pawn;
    
public:
    UMercuna3DTrackActorProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UMercuna3DTrackActorProxy* TrackActor(UObject* WorldContextObject, APawn* NewPawn, AActor* Actor, float Distance, float Speed, FVector Offset);
    
private:
    UFUNCTION()
    void OnMoveComplete(FAIRequestID RequestID, TEnumAsByte<EMercunaMoveResult::Type> Result);
    
};

