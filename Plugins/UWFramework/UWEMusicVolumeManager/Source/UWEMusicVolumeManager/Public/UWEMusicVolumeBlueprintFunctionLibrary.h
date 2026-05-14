#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
// FIXME
// stub
//#include "FMODEventInstance.h"
//real
#include "FMODBlueprintStatics.h"
#include "UWEMusicVolumeBlueprintFunctionLibrary.generated.h"

UCLASS(BlueprintType)
class UWEMUSICVOLUMEMANAGER_API UUWEMusicVolumeBlueprintFunctionLibrary : public UObject {
    GENERATED_BODY()
public:
    UUWEMusicVolumeBlueprintFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetTimelinePosition(const FFMODEventInstance& EventInstance, int32 Time);
    
    UFUNCTION(BlueprintCallable)
    static void GetTimelinePosition(const FFMODEventInstance& EventInstance, int32& Time);
    
};

