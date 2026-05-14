#pragma once
#include "CoreMinimal.h"
#include "UWEPrimaryDataAssetBase.h"
#include "UWEEntitlementID.h"
#include "UWEEntitlementBundleDataAsset.generated.h"

class IUWEUnlockableAsset;
class UUWEUnlockableAsset;

UCLASS()
class UUWEEntitlementBundleDataAsset : public UUWEPrimaryDataAssetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UUWEUnlockableAsset>> UnlockableAssets;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    TArray<FUWEEntitlementID> EntitlementIDsForPlatform;
    
public:
    UUWEEntitlementBundleDataAsset();

};

