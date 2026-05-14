#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "MercunaClampToNavigableResultDelegate.h"
#include "MercunaOctreeClampToNavigableProxy.generated.h"

class UMercunaOctreeClampToNavigableProxy;
class UObject;

UCLASS(MinimalAPI)
class UMercunaOctreeClampToNavigableProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FMercunaClampToNavigableResult OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FMercunaClampToNavigableResult OnFailure;
    
private:
    UPROPERTY(Transient)
    UObject* WorldContextObject;
    
public:
    UMercunaOctreeClampToNavigableProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UMercunaOctreeClampToNavigableProxy* ClampToNavigable(UObject* NewWorldContextObject, FVector position, float NavigationRadius, float SearchRadius);
    
};

