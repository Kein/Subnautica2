#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UWEDataAssetPartialProgressInterface.generated.h"

class APlayerState;

UINTERFACE(Blueprintable)
class UWEASSETREGISTRY_API UUWEDataAssetPartialProgressInterface : public UInterface {
    GENERATED_BODY()
};

class UWEASSETREGISTRY_API IUWEDataAssetPartialProgressInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent)
    bool IsProgressCompleted(APlayerState* PlayerState);
    
    UFUNCTION(BlueprintNativeEvent)
    bool IsPartialScanProgressPinnable(APlayerState* PlayerState);
    
    UFUNCTION(BlueprintNativeEvent)
    int32 GetTotalProgressCount(APlayerState* PlayerState);
    
    UFUNCTION(BlueprintNativeEvent)
    int32 GetCurrentProgressCount(APlayerState* PlayerState);
    
};

