#pragma once
#include "CoreMinimal.h"
#include "UWEImGuiComponent.h"
#include "UWEWeatherDiagnosticComponent.generated.h"

class UUWEWeatherSyncComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWESKY_API UUWEWeatherDiagnosticComponent : public UUWEImGuiComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UUWEWeatherSyncComponent* WeatherSyncComponent;
    
    UUWEWeatherDiagnosticComponent(const FObjectInitializer& ObjectInitializer);

};

