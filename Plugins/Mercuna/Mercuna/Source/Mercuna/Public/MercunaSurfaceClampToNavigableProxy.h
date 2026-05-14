#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "MercunaClampToNavigable2DResultDelegate.h"
#include "MercunaSurfaceAgentType.h"
#include "MercunaUsageSpec.h"
#include "MercunaSurfaceClampToNavigableProxy.generated.h"

class UMercunaSurfaceClampToNavigableProxy;
class UObject;

UCLASS(MinimalAPI)
class UMercunaSurfaceClampToNavigableProxy : public UBlueprintAsyncActionBase {
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
    UMercunaSurfaceClampToNavigableProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UMercunaSurfaceClampToNavigableProxy* ClampToNavigable(UObject* NewWorldContextObject, FVector position, FVector Up, float SearchRadius, float HeightRange, const FMercunaSurfaceAgentType& AgentType, FMercunaUsageSpec UsageSpec);
    
};

