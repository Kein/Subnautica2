#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "UWEWaterEditVolume.generated.h"

class AUWEWaterEditVolume;

UCLASS()
class UWEWATER_API AUWEWaterEditVolume : public AVolume {
    GENERATED_BODY()
public:
    AUWEWaterEditVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    static void ConfigureDefaultCube(AUWEWaterEditVolume* UWEVolumeActor);
    
};

