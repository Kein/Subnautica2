#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "MercunaIsNavigableResultDelegate.h"
#include "MercunaOctreeIsNavigableProxy.generated.h"

class UMercunaOctreeIsNavigableProxy;
class UObject;

UCLASS(MinimalAPI)
class UMercunaOctreeIsNavigableProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FMercunaIsNavigableResult OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FMercunaIsNavigableResult OnFailure;
    
private:
    UPROPERTY(Transient)
    UObject* WorldContextObject;
    
public:
    UMercunaOctreeIsNavigableProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UMercunaOctreeIsNavigableProxy* IsNavigable(UObject* NewWorldContextObject, FVector position, float NavigationRadius);
    
};

