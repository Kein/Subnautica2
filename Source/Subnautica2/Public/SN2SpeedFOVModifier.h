#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraModifier.h"
#include "SN2SpeedFOVModifier.generated.h"

UCLASS(Config=Game)
class SUBNAUTICA2_API USN2SpeedFOVModifier : public UCameraModifier {
    GENERATED_BODY()
public:
    UPROPERTY(Config)
    float SN2SpeedFOVModRate;
    
    UPROPERTY(Config)
    float SN2SpeedAddMod;
    
    UPROPERTY(Config)
    float SpeedFractionThreshold;
    
    USN2SpeedFOVModifier();

};

