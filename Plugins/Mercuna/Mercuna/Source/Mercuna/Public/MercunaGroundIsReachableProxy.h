#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "EMercunaNavLinkQueryMode.h"
#include "MercunaGroundAgentType.h"
#include "MercunaIsReachable2DResultDelegate.h"
#include "MercunaIsReachableResultDelegate.h"
#include "MercunaUsageSpec.h"
#include "MercunaGroundIsReachableProxy.generated.h"

class UMercunaGroundIsReachableProxy;
class UObject;

UCLASS(MinimalAPI)
class UMercunaGroundIsReachableProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FMercunaIsReachable2DResult OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FMercunaIsReachableResult OnFailure;
    
private:
    UPROPERTY(Transient)
    UObject* WorldContextObject;
    
public:
    UMercunaGroundIsReachableProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UMercunaGroundIsReachableProxy* IsReachable(UObject* NewWorldContextObject, FVector Start, FVector End, float MaxPathDistance, const FMercunaGroundAgentType& AgentType, FMercunaUsageSpec UsageSpec, bool bIgnoreStationaryObstacles, EMercunaNavLinkQueryMode FollowNavLinks);
    
};

