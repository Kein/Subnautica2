#pragma once
#include "CoreMinimal.h"
#include "MercunaNavigation2DQueryFilter.h"
#include "MercunaPreferPhysicalMaterialQueryFilter.generated.h"

class UPhysicalMaterial;

USTRUCT()
struct FMercunaPreferPhysicalMaterialQueryFilter : public FMercunaNavigation2DQueryFilter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UPhysicalMaterial* PreferredPhysicalMaterial;
    
    UPROPERTY(EditAnywhere)
    float NonPreferredMaterialCostMultiplierOverride;
    
    MERCUNA_API FMercunaPreferPhysicalMaterialQueryFilter();
};

