#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "VolumeQueryResult.h"
#include "UWEVolumeTrackerStatics.generated.h"

class AActor;
class ITrackedVolume;
class UTrackedVolume;
class UObject;

UCLASS(BlueprintType)
class UWEVOLUMETRACKER_API UUWEVolumeTrackerStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUWEVolumeTrackerStatics();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void QueryVolumes(const UObject* WorldContextObject, FVolumeQueryResult& Result, const AActor* IgnoreActor, const FVector& Location, float Radius);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsLocationUnderwater(const UObject* WorldContextObject, const FVector& Location, float Radius);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsLocationInWaterCurrent(const UObject* WorldContextObject, const FVector& Location, float Radius);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsLocationInBase(const UObject* WorldContextObject, const FVector& Location, float Radius);
    
    UFUNCTION(BlueprintCallable)
    static bool IsInWaterCurrent(const FVolumeQueryResult& Result);
    
    UFUNCTION(BlueprintCallable)
    static bool IsInWater(const FVolumeQueryResult& Result);
    
    UFUNCTION(BlueprintCallable)
    static bool HasAirVolume(const FVolumeQueryResult& Result);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetWaterLine(const FVolumeQueryResult& Result);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UObject*> GetVolumeQueryResultVolumesObjects(const FVolumeQueryResult& Result);
    
    UFUNCTION(BlueprintCallable)
    static TArray<TScriptInterface<ITrackedVolume>> GetVolumeQueryResultVolumes(const FVolumeQueryResult& Result);
    
    UFUNCTION(BlueprintCallable)
    static TScriptInterface<ITrackedVolume> GetVolumeQueryResultOuterVolume(const FVolumeQueryResult& Result);
    
    UFUNCTION(BlueprintCallable)
    static TScriptInterface<ITrackedVolume> GetVolumeQueryResultOceanVolume(const FVolumeQueryResult& Result);
    
    UFUNCTION(BlueprintCallable)
    static UObject* GetVolumeQueryResultCurrentVolumeObject(const FVolumeQueryResult& Result);
    
    UFUNCTION(BlueprintCallable)
    static TScriptInterface<ITrackedVolume> GetVolumeQueryResultCurrentVolume(const FVolumeQueryResult& Result);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayTagContainer GetVolumeQueryResultCurrentTags(const FVolumeQueryResult& Result);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static float GetDepthInOceanAtLocation(const UObject* WorldContextObject, const FVector& Location, float Radius);
    
    UFUNCTION(BlueprintCallable)
    static float GetDepthInOcean(const FVolumeQueryResult& Result, const FVector& Location);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static float GetDepthAtLocation(const UObject* WorldContextObject, const FVector& Location, float Radius);
    
    UFUNCTION(BlueprintCallable)
    static float GetDepth(const FVolumeQueryResult& Result, const FVector& Location);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FGameplayTagContainer GetCurrentTagsAtLocation(const UObject* WorldContextObject, const FVector& Location, float Radius);
    
};

