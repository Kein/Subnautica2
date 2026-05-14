#pragma once
#include "CoreMinimal.h"
#include "UWEConstructionProgressMaterial.generated.h"

class UMaterialInstance;

USTRUCT(BlueprintType)
struct FUWEConstructionProgressMaterial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UMaterialInstance> ConstructionProgressMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ConstructionLayerBlendIndex;
    
    UWESCULPTURALBASE_API FUWEConstructionProgressMaterial();
};

