#pragma once
#include "CoreMinimal.h"
#include "AITypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "EMercunaMoveResult.h"
#include "MercunaNavigationResultDelegate.h"
#include "MercunaGroundMoveToProxy.generated.h"

class AActor;
class APawn;
class UMercunaGroundMoveToProxy;
class UObject;

UCLASS(MinimalAPI)
class UMercunaGroundMoveToProxy : public UBlueprintAsyncActionBase {
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
    UMercunaGroundMoveToProxy();

private:
    UFUNCTION()
    void OnMoveComplete(FAIRequestID RequestID, TEnumAsByte<EMercunaMoveResult::Type> Result);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UMercunaGroundMoveToProxy* MoveToLocations(UObject* WorldContextObject, APawn* NewPawn, const TArray<FVector>& Destinations, float EndDistance, float Speed, bool UsePartialPath, FVector EndDirection);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UMercunaGroundMoveToProxy* MoveToLocation(UObject* WorldContextObject, APawn* NewPawn, const FVector& Destination, float EndDistance, float Speed, bool UsePartialPath, FVector EndDirection);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UMercunaGroundMoveToProxy* MoveToActor(UObject* WorldContextObject, APawn* NewPawn, AActor* Actor, float EndDistance, float Speed, bool UsePartialPath);
    
};

