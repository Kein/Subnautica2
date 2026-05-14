#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UWEGameConfigurationStatics.generated.h"

class UObject;
class UUWEGameConfigComponent;

UCLASS(BlueprintType)
class UWEGAMECONFIGURATION_API UUWEGameConfigurationStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUWEGameConfigurationStatics();

    UFUNCTION(BlueprintPure)
    static float GetGlobalOceanSeaLevel();
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static UUWEGameConfigComponent* GetConfigComponent(const UObject* WorldContextObject);
    
};

