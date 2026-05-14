#pragma once
#include "CoreMinimal.h"
#include "Materials/MaterialExpression.h"
#include "Materials/MaterialExpression.h"
#include "MaterialExpressionLightFunctionDomainReplace.generated.h"

UCLASS()
class UMaterialExpressionLightFunctionDomainReplace : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput DirectLightingPath;
    
    UPROPERTY()
    FExpressionInput VolumetricPath;
    
    UMaterialExpressionLightFunctionDomainReplace();

};

