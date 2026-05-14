#pragma once
#include "CoreMinimal.h"
#include "AITypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "EMercunaMoveResult.h"
#include "MercunaNavigationResultDelegate.h"
#include "MercunaGroundTrackActorProxy.generated.h"

class AActor;
class APawn;
class UMercunaGroundTrackActorProxy;
class UObject;

UCLASS(MinimalAPI)
class UMercunaGroundTrackActorProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FMercunaNavigationResult OnFailure;
    
private:
    UPROPERTY(Transient)
    APawn* Pawn;
    
public:
    UMercunaGroundTrackActorProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UMercunaGroundTrackActorProxy* TrackActor(UObject* WorldContextObject, APawn* NewPawn, AActor* Actor, float Distance, float Speed, FVector Offset, bool UsePartialPath);
    
private:
    UFUNCTION()
    void OnMoveComplete(FAIRequestID RequestID, TEnumAsByte<EMercunaMoveResult::Type> Result);
    
};

