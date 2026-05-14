#pragma once
#include "CoreMinimal.h"
#include "UWEPrimaryDataAssetBase.h"
#include "EForecastMode.h"
#include "WeatherForecastEntry.h"
#include "UWEWeatherForecast.generated.h"

class UUWEWeatherTypeBase;

UCLASS()
class UUWEWeatherForecast : public UUWEPrimaryDataAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    EForecastMode ForecastMode;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UUWEWeatherTypeBase* StartingWeather;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FWeatherForecastEntry> ForecastEntries;
    
    UUWEWeatherForecast();

};

