#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "MercunaIsNavigableResultDelegate.h"
#include "MercunaSurfaceAgentType.h"
#include "MercunaUsageSpec.h"
#include "MercunaSurfaceIsNavigableProxy.generated.h"

class UMercunaSurfaceIsNavigableProxy;
class UObject;

UCLASS(MinimalAPI)
class UMercunaSurfaceIsNavigableProxy : public UBlueprintAsyncActionBase {
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
    UMercunaSurfaceIsNavigableProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UMercunaSurfaceIsNavigableProxy* IsNavigable(UObject* NewWorldContextObject, FVector Pos, FVector Up, const FMercunaSurfaceAgentType& AgentType, FMercunaUsageSpec UsageSpec);
    
};

