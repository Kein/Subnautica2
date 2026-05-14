#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetManager.h"
#include "SN2AssetManager.generated.h"

class UObject;
class UPrimaryDataAsset;

UCLASS(Config=Game)
class USN2AssetManager : public UAssetManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TMap<UClass*, UPrimaryDataAsset*> GameDataMap;
    
private:
    UPROPERTY()
    TSet<UObject*> LoadedAssets;
    
public:
    USN2AssetManager();

};

