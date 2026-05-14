#pragma once
#include "CoreMinimal.h"
#include "Materials/MaterialExpression.h"
#include "Materials/MaterialExpressionCustomOutput.h"
#include "MaterialExpressionClipOutput.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionClipOutput : public UMaterialExpressionCustomOutput {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput ClipPixel;
    
    UMaterialExpressionClipOutput();

};

