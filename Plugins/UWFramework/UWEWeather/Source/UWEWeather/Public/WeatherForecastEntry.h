#pragma once
#include "CoreMinimal.h"
#include "WeatherForecastEntry.generated.h"

class UUWEWeatherTypeBase;

USTRUCT(BlueprintType)
struct FWeatherForecastEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Chance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UUWEWeatherTypeBase* WeatherType;
    
    UWEWEATHER_API FWeatherForecastEntry();
};

