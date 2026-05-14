#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "EMercunaNavLinkQueryMode.h"
#include "MercunaIsReachable2DResultDelegate.h"
#include "MercunaIsReachableResultDelegate.h"
#include "MercunaSurfaceAgentType.h"
#include "MercunaUsageSpec.h"
#include "MercunaSurfaceIsReachableProxy.generated.h"

class UMercunaSurfaceIsReachableProxy;
class UObject;

UCLASS(MinimalAPI)
class UMercunaSurfaceIsReachableProxy : public UBlueprintAsyncActionBase {
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
    UMercunaSurfaceIsReachableProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UMercunaSurfaceIsReachableProxy* IsReachable(UObject* NewWorldContextObject, FVector Start, FVector Up, FVector End, float MaxPathDistance, const FMercunaSurfaceAgentType& AgentType, FMercunaUsageSpec UsageSpec, EMercunaNavLinkQueryMode FollowNavLinks);
    
};

