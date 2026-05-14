#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UWEDataAssetSettings.generated.h"

class UTexture2D;

UCLASS(DefaultConfig, Config=UWEDataAsset)
class UWEASSETREGISTRY_API UUWEDataAssetSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UTexture2D> DefaultThumbnail;
    
    UUWEDataAssetSettings();

};

