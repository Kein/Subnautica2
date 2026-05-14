#pragma once
#include "CoreMinimal.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "MercunaPhysicalMaterial.generated.h"

UCLASS(CollapseCategories)
class MERCUNA_API UMercunaPhysicalMaterial : public UPhysicalMaterial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CostMultiplier;
    
    UMercunaPhysicalMaterial();

};

