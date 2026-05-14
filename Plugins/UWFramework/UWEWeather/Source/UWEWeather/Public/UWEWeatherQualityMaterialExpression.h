#pragma once
#include "CoreMinimal.h"
#include "Materials/MaterialExpression.h"
#include "Materials/MaterialExpression.h"
#include "UWEWeatherQualityMaterialExpression.generated.h"

UCLASS()
class UWEWEATHER_API UUWEWeatherQualityMaterialExpression : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput WeatherEnabledInput;
    
    UPROPERTY()
    FExpressionInput WeatherDisabledInput;
    
    UUWEWeatherQualityMaterialExpression();

};

