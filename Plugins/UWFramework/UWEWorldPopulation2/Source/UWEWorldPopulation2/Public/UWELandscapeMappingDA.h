#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UWELandscapeMappingDA.generated.h"

class ULandscapeLayerInfoObject;

UCLASS(BlueprintType)
class UWEWORLDPOPULATION2_API UUWELandscapeMappingDA : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSoftObjectPtr<ULandscapeLayerInfoObject>> LandscapeLayers;
    
    UUWELandscapeMappingDA();

};

