#pragma once
#include "CoreMinimal.h"
#include "UWEWorldPopRulePlacement.h"
#include "UWEWorldPopRulePlacementMaterial.generated.h"

class UMaterialInterface;
class UUWEMaterialMappingDA;

UCLASS(EditInlineNew)
class UWEWORLDPOPULATION2_API UUWEWorldPopRulePlacementMaterial : public UUWEWorldPopRulePlacement {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<TSoftObjectPtr<UMaterialInterface>> AllowedMaterials;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UUWEMaterialMappingDA> MaterialMappingDA;
    
    UUWEWorldPopRulePlacementMaterial();

};

