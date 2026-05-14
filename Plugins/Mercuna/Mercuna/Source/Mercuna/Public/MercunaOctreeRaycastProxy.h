#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "MercunaRaycastResultDelegate.h"
#include "MercunaOctreeRaycastProxy.generated.h"

class UMercunaOctreeRaycastProxy;
class UObject;

UCLASS(MinimalAPI)
class UMercunaOctreeRaycastProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FMercunaRaycastResult OnHit;
    
    UPROPERTY(BlueprintAssignable)
    FMercunaRaycastResult OnNoHit;
    
private:
    UPROPERTY(Transient)
    UObject* WorldContextObject;
    
public:
    UMercunaOctreeRaycastProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UMercunaOctreeRaycastProxy* NavigationRaycast(UObject* NewWorldContextObject, FVector Start, FVector End, float NavigationRadius);
    
};

