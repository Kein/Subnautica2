#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SN2PlayerCustomizationBlueprintFunctionLibrary.generated.h"

class UObject;
class UTexture2D;

UCLASS(BlueprintType)
class SUBNAUTICA2_API USN2PlayerCustomizationBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USN2PlayerCustomizationBlueprintFunctionLibrary();

private:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TSoftObjectPtr<UTexture2D> GetLocalPlayerPaperDollImage(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TSoftObjectPtr<UTexture2D> GetLocalPlayerInventoryPaperDollImage(UObject* WorldContextObject);
    
};

