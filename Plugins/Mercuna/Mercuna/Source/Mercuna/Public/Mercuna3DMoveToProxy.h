#pragma once
#include "CoreMinimal.h"
#include "AITypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "EMercunaMoveResult.h"
#include "MercunaNavigationResultDelegate.h"
#include "Mercuna3DMoveToProxy.generated.h"

class AActor;
class APawn;
class UMercuna3DMoveToProxy;
class UObject;

UCLASS(MinimalAPI)
class UMercuna3DMoveToProxy : public UBlueprintAsyncActionBase {
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
    UMercuna3DMoveToProxy();

private:
    UFUNCTION()
    void OnMoveComplete(FAIRequestID RequestID, TEnumAsByte<EMercunaMoveResult::Type> Result);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UMercuna3DMoveToProxy* MoveToLocations(UObject* WorldContextObject, APawn* NewPawn, const TArray<FVector>& Destinations, float EndDistance, float Speed, bool UsePartialPath);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UMercuna3DMoveToProxy* MoveToLocation(UObject* WorldContextObject, APawn* NewPawn, const FVector& Destination, float EndDistance, float Speed, bool UsePartialPath);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UMercuna3DMoveToProxy* MoveToActor(UObject* WorldContextObject, APawn* NewPawn, AActor* Actor, float EndDistance, float Speed, bool UsePartialPath);
    
};

