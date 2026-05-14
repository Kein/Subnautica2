#pragma once
#include "CoreMinimal.h"
#include "AITypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "EMercunaMoveResult.h"
#include "MercunaNavigationResultDelegate.h"
#include "MercunaSurfaceMoveToProxy.generated.h"

class AActor;
class APawn;
class UMercunaSurfaceMoveToProxy;
class UObject;

UCLASS(MinimalAPI)
class UMercunaSurfaceMoveToProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FMercunaNavigationResult OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FMercunaNavigationResult OnFailure;
    
private:
    UPROPERTY(Transient)
    APawn* Pawn;
    
public:
    UMercunaSurfaceMoveToProxy();

private:
    UFUNCTION()
    void OnMoveComplete(FAIRequestID RequestID, TEnumAsByte<EMercunaMoveResult::Type> Result);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UMercunaSurfaceMoveToProxy* MoveToLocations(UObject* WorldContextObject, APawn* NewPawn, const TArray<FVector>& Destinations, float EndDistance, float Speed, bool UsePartialPath, FVector EndDirection);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UMercunaSurfaceMoveToProxy* MoveToLocation(UObject* WorldContextObject, APawn* NewPawn, const FVector& Destination, float EndDistance, float Speed, bool UsePartialPath, FVector EndDirection);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UMercunaSurfaceMoveToProxy* MoveToActor(UObject* WorldContextObject, APawn* NewPawn, AActor* Actor, float EndDistance, float Speed, bool UsePartialPath, bool UseEndActorOrientation);
    
};

