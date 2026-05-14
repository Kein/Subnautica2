#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "ETemperatureContributionType.h"
#include "UWETemperatureProviderInterface.generated.h"

UINTERFACE(Blueprintable)
class UWETEMPERATUREREGIONS_API UUWETemperatureProviderInterface : public UInterface {
    GENERATED_BODY()
};

class UWETEMPERATUREREGIONS_API IUWETemperatureProviderInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetTemperatureContributionValue();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ETemperatureContributionType GetTemperatureContributionType();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetTemperatureAlphaAtLocation(FVector Location);
    
};

