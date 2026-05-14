#pragma once
#include "CoreMinimal.h"
#include "Materials/MaterialExpression.h"
#include "Materials/MaterialExpressionCustomOutput.h"
#include "MaterialExpressionMetallicSpecularRoughnessAlphaBlendOutput.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionMetallicSpecularRoughnessAlphaBlendOutput : public UMaterialExpressionCustomOutput {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput MetallicSpecularRoughnessAlphaBlend;
    
    UMaterialExpressionMetallicSpecularRoughnessAlphaBlendOutput();

};

