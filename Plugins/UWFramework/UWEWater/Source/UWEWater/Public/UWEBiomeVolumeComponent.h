#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "UWEWaterLightSettings.h"
#include "UWEBiomeVolumeComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEWATER_API UUWEBiomeVolumeComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FUWEWaterLightSettings WaterLightSettings;
    
    UUWEBiomeVolumeComponent(const FObjectInitializer& ObjectInitializer);

};

