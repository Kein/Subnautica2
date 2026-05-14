#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UWEDataAssetInfoInterface.generated.h"

class UTexture2D;

UINTERFACE(Blueprintable)
class UWEASSETREGISTRY_API UUWEDataAssetInfoInterface : public UInterface {
    GENERATED_BODY()
};

class UWEASSETREGISTRY_API IUWEDataAssetInfoInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TSoftObjectPtr<UTexture2D> GetDataAssetThumbnail();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetDataAssetSecondaryDescription();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetDataAssetName();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetDataAssetDescription();
    
};

