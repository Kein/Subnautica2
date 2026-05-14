#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWEBaseMaterialOverride.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct UWESCULPTURALBASE_API FUWEBaseMaterialOverride {
    GENERATED_BODY()
public:
    UPROPERTY()
    TSet<FIntVector> Cells;
    
    UPROPERTY()
    bool Hide;
    
    UPROPERTY()
    UMaterialInterface* Material;
    
    UPROPERTY()
    UMaterialInterface* OverlayMaterial;
    
    FUWEBaseMaterialOverride();
};

