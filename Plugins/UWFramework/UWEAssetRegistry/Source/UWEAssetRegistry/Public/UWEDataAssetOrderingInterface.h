#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UWEDataAssetOrderingInterface.generated.h"

UINTERFACE(Blueprintable)
class UWEASSETREGISTRY_API UUWEDataAssetOrderingInterface : public UInterface {
    GENERATED_BODY()
};

class UWEASSETREGISTRY_API IUWEDataAssetOrderingInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetDataAssetOrderingIndex();
    
};

