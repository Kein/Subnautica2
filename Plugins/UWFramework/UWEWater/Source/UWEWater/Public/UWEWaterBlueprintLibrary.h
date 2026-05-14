#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UWEWaterBlueprintLibrary.generated.h"

class UObject;

UCLASS(BlueprintType)
class UWEWATER_API UUWEWaterBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUWEWaterBlueprintLibrary();

    UFUNCTION(BlueprintPure, meta=(WorldContext="InWorldContextObject"))
    static FVector GetViewLocation(UObject* InWorldContextObject);
    
};

