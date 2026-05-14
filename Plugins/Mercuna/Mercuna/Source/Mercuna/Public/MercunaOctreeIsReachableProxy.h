#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "MercunaIsReachableResultDelegate.h"
#include "MercunaOctreeIsReachableProxy.generated.h"

class UMercunaOctreeIsReachableProxy;
class UObject;

UCLASS(MinimalAPI)
class UMercunaOctreeIsReachableProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FMercunaIsReachableResult OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FMercunaIsReachableResult OnFailure;
    
private:
    UPROPERTY(Transient)
    UObject* WorldContextObject;
    
public:
    UMercunaOctreeIsReachableProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UMercunaOctreeIsReachableProxy* IsReachable(UObject* NewWorldContextObject, FVector Start, FVector End, float NavigationRadius, float MaxPathLength);
    
};

