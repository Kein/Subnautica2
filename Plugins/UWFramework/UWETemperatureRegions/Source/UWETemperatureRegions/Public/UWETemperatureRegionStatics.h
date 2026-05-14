#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UWETemperatureRegionStatics.generated.h"

class UObject;

UCLASS(BlueprintType)
class UWETEMPERATUREREGIONS_API UUWETemperatureRegionStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUWETemperatureRegionStatics();

    UFUNCTION(BlueprintCallable)
    static float GetTemperatureAtLocation(const FVector& Location, const TArray<UObject*>& Sources);
    
    UFUNCTION(BlueprintPure)
    static float GetDefaultWorldTemperature();
    
};

