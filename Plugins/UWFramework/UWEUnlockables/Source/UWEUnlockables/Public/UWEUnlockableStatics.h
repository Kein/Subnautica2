#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UWEUnlockNotificationPackage.h"
#include "UWEUnlockableStatics.generated.h"

class UObject;
class UUWEPrimaryDataAssetBase;

UCLASS(BlueprintType)
class UWEUNLOCKABLES_API UUWEUnlockableStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUWEUnlockableStatics();

    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsAssetUnlockedThroughUnlockComponent(UObject* WorldContextObject, UUWEPrimaryDataAssetBase* UnlockableAsset);
    
    UFUNCTION(BlueprintPure)
    static FUWEUnlockNotificationPackage GetNotificationPackage(UUWEPrimaryDataAssetBase* Asset);
    
};

