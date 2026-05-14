#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "MercunaGroundAgentType.h"
#include "MercunaIsNavigableResultDelegate.h"
#include "MercunaUsageSpec.h"
#include "MercunaGroundIsNavigableProxy.generated.h"

class UMercunaGroundIsNavigableProxy;
class UObject;

UCLASS(MinimalAPI)
class UMercunaGroundIsNavigableProxy : public UBlueprintAsyncActionBase {
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
    UMercunaGroundIsNavigableProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UMercunaGroundIsNavigableProxy* IsNavigable(UObject* NewWorldContextObject, FVector Pos, const FMercunaGroundAgentType& AgentType, FMercunaUsageSpec UsageSpec, bool bIgnoreStationaryObstacles);
    
};

