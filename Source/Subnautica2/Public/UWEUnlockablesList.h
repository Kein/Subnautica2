#pragma once
#include "CoreMinimal.h"
#include "UWEUnlockablesList.generated.h"

class IUWEUnlockableAsset;
class UUWEUnlockableAsset;

USTRUCT(BlueprintType)
struct FUWEUnlockablesList {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<TScriptInterface<IUWEUnlockableAsset>> Unlockables;
    
    SUBNAUTICA2_API FUWEUnlockablesList();
};

