#pragma once
#include "CoreMinimal.h"
#include "UWESculpturalEditGhostMaterials.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FUWESculpturalEditGhostMaterials {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Config, EditDefaultsOnly)
    TSoftObjectPtr<UMaterialInterface> OverlayMaterial;
    
    UPROPERTY(BlueprintReadOnly, Config, EditDefaultsOnly)
    TSoftObjectPtr<UMaterialInterface> DoubleSidedOverlayMaterial;
    
    UPROPERTY(BlueprintReadOnly, Config, EditDefaultsOnly)
    int32 HighlightStencilValue;
    
    UWESCULPTURALBASE_API FUWESculpturalEditGhostMaterials();
};

