#pragma once
#include "CoreMinimal.h"
#include "Materials/MaterialExpression.h"
#include "Materials/MaterialExpressionCustomOutput.h"
#include "MaterialExpressionVolumetricFogBlendOutput.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionVolumetricFogBlendOutput : public UMaterialExpressionCustomOutput {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput BlendAlpha;
    
    UMaterialExpressionVolumetricFogBlendOutput();

};

