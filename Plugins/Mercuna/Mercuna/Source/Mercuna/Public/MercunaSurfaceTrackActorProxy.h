#pragma once
#include "CoreMinimal.h"
#include "AITypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "EMercunaMoveResult.h"
#include "MercunaNavigationResultDelegate.h"
#include "MercunaSurfaceTrackActorProxy.generated.h"

class AActor;
class APawn;
class UMercunaSurfaceTrackActorProxy;
class UObject;

UCLASS(MinimalAPI)
class UMercunaSurfaceTrackActorProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FMercunaNavigationResult OnFailure;
    
private:
    UPROPERTY(Transient)
    APawn* Pawn;
    
public:
    UMercunaSurfaceTrackActorProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UMercunaSurfaceTrackActorProxy* TrackActor(UObject* WorldContextObject, APawn* NewPawn, AActor* Actor, float Distance, float Speed, FVector Offset, bool UsePartialPath, bool UseEndActorOrientation);
    
private:
    UFUNCTION()
    void OnMoveComplete(FAIRequestID RequestID, TEnumAsByte<EMercunaMoveResult::Type> Result);
    
};

