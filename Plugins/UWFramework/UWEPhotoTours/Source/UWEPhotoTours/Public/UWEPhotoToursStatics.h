#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CameraInfo.h"
#include "UWEPhotoToursStatics.generated.h"

class UObject;

UCLASS(BlueprintType)
class UWEPHOTOTOURS_API UUWEPhotoToursStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUWEPhotoToursStatics();

    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<FCameraInfo> GetPhotoTourCameras(const UObject* WorldContextObject);
    
};

