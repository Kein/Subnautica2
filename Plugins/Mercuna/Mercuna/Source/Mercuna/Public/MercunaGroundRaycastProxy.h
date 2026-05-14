#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "MercunaGroundAgentType.h"
#include "MercunaRaycastResultDelegate.h"
#include "MercunaUsageSpec.h"
#include "MercunaGroundRaycastProxy.generated.h"

class UMercunaGroundRaycastProxy;
class UObject;

UCLASS(MinimalAPI)
class UMercunaGroundRaycastProxy : public UBlueprintAsyncActionBase {
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
    UMercunaGroundRaycastProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UMercunaGroundRaycastProxy* Raycast(UObject* NewWorldContextObject, FVector Start, FVector End, const FMercunaGroundAgentType& AgentType, FMercunaUsageSpec UsageSpec, bool bIgnoreStationaryObstacles);
    
};

