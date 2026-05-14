#pragma once
#include "CoreMinimal.h"
#include "Materials/MaterialExpression.h"
#include "Materials/MaterialExpression.h"
#include "MaterialExpressionDistanceToNearestMediaVolume.generated.h"

UCLASS()
class UMaterialExpressionDistanceToNearestMediaVolume : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput position;
    
    UMaterialExpressionDistanceToNearestMediaVolume();

};

