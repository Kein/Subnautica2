#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "UWETemperatureRegionTracker.generated.h"

class UObject;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWETEMPERATUREREGIONS_API UUWETemperatureRegionTracker : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<UObject*> CachedActiveTemperatureRegions;
    
    UPROPERTY(EditAnywhere)
    FComponentReference OverlapVolumeComponent;
    
public:
    UUWETemperatureRegionTracker(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintPure)
    float GetTemperature();
    
};

