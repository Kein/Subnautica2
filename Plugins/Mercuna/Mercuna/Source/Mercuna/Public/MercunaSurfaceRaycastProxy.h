#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "MercunaRaycastResultDelegate.h"
#include "MercunaSurfaceAgentType.h"
#include "MercunaUsageSpec.h"
#include "MercunaSurfaceRaycastProxy.generated.h"

class UMercunaSurfaceRaycastProxy;
class UObject;

UCLASS(MinimalAPI)
class UMercunaSurfaceRaycastProxy : public UBlueprintAsyncActionBase {
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
    UMercunaSurfaceRaycastProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UMercunaSurfaceRaycastProxy* Raycast(UObject* NewWorldContextObject, FVector Start, FVector Up, FVector End, const FMercunaSurfaceAgentType& AgentType, FMercunaUsageSpec UsageSpec);
    
};

