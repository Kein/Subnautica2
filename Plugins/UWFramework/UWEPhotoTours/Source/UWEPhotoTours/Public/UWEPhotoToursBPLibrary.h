#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UWEPhotoToursBPLibrary.generated.h"

UCLASS(BlueprintType)
class UUWEPhotoToursBPLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUWEPhotoToursBPLibrary();

    UFUNCTION(BlueprintCallable)
    static float UWEPhotoToursSampleFunction(float Param);
    
};

