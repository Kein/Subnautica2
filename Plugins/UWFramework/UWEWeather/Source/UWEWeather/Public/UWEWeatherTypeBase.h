#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWEPrimaryDataAssetBase.h"
#include "UWEWeatherTypeBase.generated.h"

UCLASS()
class UWEWEATHER_API UUWEWeatherTypeBase : public UUWEPrimaryDataAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FString Description;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FLinearColor DebugColor;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float WeatherDuration;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float TransitionDuration;
    
    UUWEWeatherTypeBase();

};

