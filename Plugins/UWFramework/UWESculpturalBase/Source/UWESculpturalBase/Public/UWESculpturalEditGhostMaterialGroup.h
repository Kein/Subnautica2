#pragma once
#include "CoreMinimal.h"
#include "UWESculpturalEditGhostMaterialGroup.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FUWESculpturalEditGhostMaterialGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Config, EditDefaultsOnly)
    TSoftObjectPtr<UMaterialInterface> ExteriorMaterial;
    
    UPROPERTY(BlueprintReadOnly, Config, EditDefaultsOnly)
    TSoftObjectPtr<UMaterialInterface> InteriorMaterial;
    
    UPROPERTY(BlueprintReadOnly, Config, EditDefaultsOnly)
    TSoftObjectPtr<UMaterialInterface> OverlayMaterial;
    
    UPROPERTY(BlueprintReadOnly, Config, EditDefaultsOnly)
    bool ShouldHighlightOnHover;
    
    UWESCULPTURALBASE_API FUWESculpturalEditGhostMaterialGroup();
};

