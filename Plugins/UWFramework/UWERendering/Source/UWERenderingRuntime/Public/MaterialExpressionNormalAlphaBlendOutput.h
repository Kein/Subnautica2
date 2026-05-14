#pragma once
#include "CoreMinimal.h"
#include "Materials/MaterialExpression.h"
#include "Materials/MaterialExpressionCustomOutput.h"
#include "MaterialExpressionNormalAlphaBlendOutput.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionNormalAlphaBlendOutput : public UMaterialExpressionCustomOutput {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput NormalAlphaBlend;
    
    UMaterialExpressionNormalAlphaBlendOutput();

};

