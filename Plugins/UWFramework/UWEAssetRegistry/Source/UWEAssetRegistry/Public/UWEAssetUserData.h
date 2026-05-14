#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetUserData.h"
#include "UWEAssetUserData.generated.h"

class UUWEActorDataAsset;

UCLASS(BlueprintType, EditInlineNew)
class UWEASSETREGISTRY_API UUWEAssetUserData : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UUWEActorDataAsset*> DataAssets;
    
    UUWEAssetUserData();

};

