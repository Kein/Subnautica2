#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "MercunaClampToNavigable2DResultDelegate.h"
#include "MercunaGroundAgentType.h"
#include "MercunaUsageSpec.h"
#include "MercunaGroundClampToNavigableProxy.generated.h"

class UMercunaGroundClampToNavigableProxy;
class UObject;

UCLASS(MinimalAPI)
class UMercunaGroundClampToNavigableProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FMercunaClampToNavigable2DResult OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FMercunaClampToNavigable2DResult OnFailure;
    
private:
    UPROPERTY(Transient)
    UObject* WorldContextObject;
    
public:
    UMercunaGroundClampToNavigableProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UMercunaGroundClampToNavigableProxy* ClampToNavigable(UObject* NewWorldContextObject, FVector position, float SearchRadius, float HeightRange, const FMercunaGroundAgentType& AgentType, FMercunaUsageSpec UsageSpec, bool bIgnoreStationaryObstacles);
    
};

