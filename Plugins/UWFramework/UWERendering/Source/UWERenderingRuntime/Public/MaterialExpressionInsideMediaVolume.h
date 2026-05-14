#pragma once
#include "CoreMinimal.h"
#include "Materials/MaterialExpression.h"
#include "Materials/MaterialExpression.h"
#include "MaterialExpressionInsideMediaVolume.generated.h"

UCLASS()
class UMaterialExpressionInsideMediaVolume : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput position;
    
    UPROPERTY()
    FExpressionInput Bias;
    
    UPROPERTY(EditAnywhere)
    float BiasValue;
    
    UMaterialExpressionInsideMediaVolume();

};

